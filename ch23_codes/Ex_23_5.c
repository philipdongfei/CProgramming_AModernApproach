#include    <stdio.h>
#include    <ctype.h>
#include    <stdlib.h>
#include    <string.h>

long int isHex(char *str)
{
    int len = strlen(str), base = 16;
    char *stopstring;
    for (int i=0; i < len; i++)
    {
        if (isxdigit(str[i]) == 0)
            return -1;
    }
    return strtoul(str,&stopstring, base);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        exit(EXIT_FAILURE);

    printf("%ld\n", isHex(argv[1]));

    return 0;
}
