#include    <stdio.h>
#include    "word.h"

int read_char(void)
{
    int ch = getchar();
#if 0
    if (ch == '\n' || ch == '\t')
        return ' ';
    return ch;
#else
    return (ch == '\n' || ch == '\t')? ' ' : ch;
#endif

}

int read_word(char *word, int len)
{
    int ch, pos = 0;

    while ((ch = read_char()) == ' ')
        ;
    while (ch != ' ' && ch != EOF) {
        if (pos < len)
            word[pos++] = ch;
        ch = read_char();
    }
    word[pos] = '\0';
    return pos;
}

