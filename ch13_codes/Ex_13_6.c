#include    <stdio.h>
#include    <string.h>
#include    <ctype.h>

#if 0
// standard answer
void censor(char s[]) {
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'f' && s[i+1] == 'o' && s[i+2] == 'o')
            s[i] = s[i+1] = s[i+2] = 'x';
    }
}

#endif
void censor(char a[], int n)
{
    char *p = a;

    while (p < a + (n-3)) {
        if (*p == 'f' && *(p+1) == 'o' && *(p+2) == 'o')
        {
            *p = *(p+1) = *(p+2) = 'x';
            p += 3;
        }
        else
            p++;
    }
}

int main(int argc, char *argv[])
{
    char msg[256] = {"food fool"};

    censor(msg, strlen(msg));
    printf("%s\n", msg);

    return 0;
}
