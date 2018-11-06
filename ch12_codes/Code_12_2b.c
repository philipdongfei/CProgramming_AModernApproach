#include    <stdio.h>
#include    <ctype.h>

#define N 256

int main(void)
{
    char Input[N] = {0,}, ch;
    char *p, *q;
    int i=0, len, flag = 1;
    printf("Enter a message: ");
    for (p = &Input[0]; p < &Input[N]; )
    {
        ch = getchar();
        if (ch == '\n')
            break;
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            *p = tolower(ch);
            p++;
            i++;
        }   
    }
    len = i;
#if 0
    printf("len=%d\n", len); 
    for (int i=0; i < len; i++)
        printf("%c", Input[i]);
    printf("\n");
#endif

    for (p = Input, q = &Input[len-1]; p < &Input[len/2 + 1]; p++, q--)
    {
        if (*p != *q)
        {
            flag = 0;
            break;
        }
    }
    //if (p != q)
    //    flag = 0;

    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;

}
