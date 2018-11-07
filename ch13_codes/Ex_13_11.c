#include    <stdio.h>

int strcmp(char *s, char *t)
{
    while (*s == *t){
        if (*s == '\0')
            return 0;
        s++;
        t++;
    }
    return *s - *t;
}

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 1;
    if (strcmp(argv[1], argv[2]) < 0)
        printf("%s < %s\n", argv[1], argv[2]);
    else if (strcmp(argv[1], argv[2]) > 0)
        printf("%s > %s\n", argv[1], argv[2]);
    else
        printf("%s == %s\n", argv[1], argv[2]);

    return 0;
}
