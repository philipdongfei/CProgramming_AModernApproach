#include    <stdio.h>


int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';  //terminates string
    return i;       // number of characters stored
}

int count_spaces(const char s[])
{
    int count = 0, i;

    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == ' ')
            count++;
    }
    return count;
}

int count_spaces(const char *s)
{
    int count = 0;

    for (; *s != '\0'; s++) {
        if (*s == ' ')
            count++;
    }
    return count;
}

