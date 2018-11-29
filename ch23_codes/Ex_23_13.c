#include    <stdio.h>
#include    <ctype.h>
#include    <stdlib.h>
#include    <string.h>

int count_words(char *sentence)
{
    char *p = NULL, strDelimit[] = {" \t\n"};
    int count = 0;

    p = strtok(sentence, strDelimit);
    printf("%s\n", p);
    if (p != NULL)
        count++;
    while ((p = strtok(NULL, strDelimit)) != NULL)
    {
        printf("%s\n", p);
        count++;

    }
    return count;
}

int main(int argc, char *argv[])
{
    char sentence[] = {"I fell down to my feet and I saw they bled, yeah yeah."};
    printf("%s ",sentence);
    printf("has %d words\n", count_words(sentence));

    return 0;
}
