#include    <stdio.h>
#include    <string.h>

#define TOUPPER(c)  ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(void)
{
    char s[8] = {0,};
    strcpy(s, "abcd");
    int i = 0;
    putchar(TOUPPER(s[++i]));

    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));

    return 0;
}
