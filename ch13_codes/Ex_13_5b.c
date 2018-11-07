#include    <stdio.h>
#include    <ctype.h>
#include    <string.h>

#define N 256

void capitalize(char a[])
{
    char *ch = a;
    int i = 0;

    while ((*ch++) != '\0') {
        if (*ch >= 'a' && *ch <= 'z')
            *ch = toupper(*ch);
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
