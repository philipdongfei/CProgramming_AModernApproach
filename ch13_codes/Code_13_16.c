#include    <stdio.h>
#include    <string.h>
#include    <ctype.h>

#define MSG_LEN 80    /* maximum length of message */

void reverse(char *mesage);

int main(void)
{
    int index = 0;
    char ch, msg[MSG_LEN] = {0};

    printf("Enter a message: ");

    while (((ch = getchar()) != '\n') && (index < MSG_LEN )){
        msg[index] = ch;
        index++;
    }
    printf("Reversal is: ");
    reverse(msg);
    printf("%s", msg);
#if 0
    for(int i = index-1; i >= 0; i--)
        printf("%c", msg[i]);
#endif
    printf("\n");

    return 0;
}

void reverse(char *message)
{
    char *first, *last ;
    int len = strlen(message);
    first = message, last = message + len -1;

    while ( first < last ) {
        char temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }
}
