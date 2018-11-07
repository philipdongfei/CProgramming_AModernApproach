#include    <stdio.h>

int count_spaces(const char *s)
{
    char ch;
    int count = 0;
    while ((ch = *s++) != '\0'){
        if (ch == ' ')
            count++;
    }
    return count;
}

int main(void)
{
    char str[] = "Note that the short-circuit evaluation of ";

    printf("%s\n", str);
    printf("%d\n", count_spaces(str));

    return 0;
}
