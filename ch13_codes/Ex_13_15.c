#include    <stdio.h>

int f(char *s, char *t)
{
    char *p1, *p2;

    for (p1 = s; *p1; p1++) {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2) break;
        if (*p2 == '\0') break;
    }
    return p1 - s;
}

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 1;
    printf("f:%d\n", f(argv[1], argv[2]));

    return 0;
}
