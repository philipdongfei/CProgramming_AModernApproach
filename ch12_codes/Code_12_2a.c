#include    <stdio.h>
#include    <ctype.h>

#define N 256

int main(void)
{
    char Input[N] = {0,}, ch;
    int i, len, flag = 1;
    printf("Enter a message: ");
    for (i = 0; i < N;)
    {
        ch = getchar();
        if (ch == '\n')
            break;
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            //printf("get: %c", ch);
            Input[i] = tolower(ch);
            i++;

        }    
    }
    len = i;
    for (i = 0; i < len/2 + 1; i++)
    {
        printf("%c, %c\n", Input[i], Input[(len-1)-i]);
        if (Input[i] != Input[(len-1)-i])
        {
            flag = 0;
            break;
        }
    }
    //if (i*2 != len)
    //    flag = 0;

    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;

}
