//https://gist.github.com/Alexey-N-Chernyshov/4634731
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/socket.h>
#include <resolv.h>
#include <sys/epoll.h>
#include <arpa/inet.h>
#include <unistd.h>

#define PORT 2224
#define SERVER "127.0.0.1"
#define MAXBUF 1024
#define MAX_EPOLL_EVENTS 64

int main(int argc, char *argv[]) {
    int sockfd;
    struct sockaddr_in dest;
    char buffer[MAXBUF];
    struct epoll_event events[MAX_EPOLL_EVENTS];
    int i, num_ready;

    /*---Open socket for streaming---*/
    if ( (sockfd = socket(AF_INET, SOCK_STREAM|SOCK_NONBLOCK, 0)) < 0 ) {
        perror("Socket");
        exit(errno);
    }

    /*---Add socket to epoll---*/
    int epfd = epoll_create(1);
    struct epoll_event event;
    //event.events = EPOLLIN|EPOLLOUT| EPOLLRDHUP; // Cann append "|EPOLLOUT" for write events as well
    event.events = EPOLLOUT | EPOLLRDHUP;
    event.data.fd = sockfd;
    epoll_ctl(epfd, EPOLL_CTL_ADD, sockfd, &event);

    /*---Initialize server address/port struct---*/
    bzero(&dest, sizeof(dest));
    dest.sin_family = AF_INET;
    //dest.sin_port = htons(PORT);
    dest.sin_port = htons(atoi(argv[1]));
    if ( inet_pton(AF_INET, SERVER, &dest.sin_addr.s_addr) == 0 ) {
        perror(SERVER);
        exit(errno);
    }

    /*---Connect to server---*/
    if ( connect(sockfd, (struct sockaddr*)&dest, sizeof(dest)) != 0 ) {
        if(errno != EINPROGRESS) {
            perror("Connect ");
            exit(errno);
        }
    }

    /*---Wait for socket connect to complete---*/
    num_ready = epoll_wait(epfd, events, MAX_EPOLL_EVENTS, 1000/*timeout*/);
    for(i = 0; i < num_ready; i++) {
        if(events[i].events & EPOLLIN) {
            printf("Socket %d connected\n", events[i].data.fd);
        }
    }
    int bEnd = 0;

    while(1){
        /*---Wait for data---*/
        num_ready = epoll_wait(epfd, events, MAX_EPOLL_EVENTS, 1000/*timeout*/);
	    //printf("num_ready=%d\n", num_ready);
        for(i = 0; i < num_ready; i++) {
	    	if (events[i].events & EPOLLRDHUP) {
	    		printf("connect error\n");
	    		break;
	    	}
	    	else if (events[i].events & EPOLLOUT) {
	    		printf("Socket %d send some data\n", events[i].data.fd);
	    		memset(buffer, 0, sizeof(buffer));
	    		sprintf(buffer,"Hi,server.");
	    		if (send(sockfd, buffer, strlen(buffer), 0) > 0)
	    			printf("send success\n");
                event.events = EPOLLIN | EPOLLRDHUP;
                //event.data.fd = sockfd;
                epoll_ctl(epfd, EPOLL_CTL_MOD, sockfd, &event);
	    	}
            else if(events[i].events & EPOLLIN) {
                printf("Socket %d got some data\n", events[i].data.fd);
                bzero(buffer, MAXBUF);
                recv(sockfd, buffer, sizeof(buffer), 0);
                printf("Received: %s\n", buffer);
                bEnd = 1;
                break;
            }
	    	
        }
        if (0 != bEnd)
            break;
    }


	close(epfd);
    close(sockfd);
    return 0;
}
