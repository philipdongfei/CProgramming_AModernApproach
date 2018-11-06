#include    <stdio.h>

#define MSG_LEN 80    /* maximum length of message */

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
    for(int i = index-1; i >= 0; i--)
        printf("%c", msg[i]);
    printf("\n");

    return 0;
}
