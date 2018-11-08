#include    <stdio.h>
#include    <stdbool.h>
#include    <string.h>
#include    <ctype.h>

#define N 256

bool is_palindrome(const char *message);

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

    if (is_palindrome(Input))
        printf("palindrome\n");
    else
        printf("not palindrome\n");

    return 0;

}

bool is_palindrome(const char *message)
{
    char *Input = message, *p, *q;
    int len = strlen(message), flag = 1;

    for (p = Input, q = &Input[len-1]; p < &Input[len/2 + 1]; p++, q--)
    {
        if (*p != *q)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        return true;

    return false;
}
