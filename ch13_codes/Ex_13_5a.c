#include    <stdio.h>
#include    <ctype.h>
#include    <string.h>

#define N 256

void capitalize(char a[])
{
    char ch = '\0';
    int i = 0;

    while ((ch = a[i]) != '\0') {
        if (ch >= 'a' && ch <= 'z')
            a[i] = toupper(ch);
        i++;
    }
}

int main(int argc, char *argv[])
{
    char msg[N] = {0,};

    if (argc > 1)
        strncpy(msg, argv[1], N);
    capitalize(msg);
    printf("%s\n", msg);

    return 0;
}
