#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

#define MAX_WORDS  50
#define WORD_LEN    20

int read_word(char **str, int n);
int compare_parts(const void *p, const void *q);

int main(void)
{
    char *words[MAX_WORDS];
    char *pWord;
    int num_words = 0, i, j, len;

    for(;;) {
        if (num_words == MAX_WORDS){
            printf("--- NO SPACE LEFT ---\n");
            break;
        }
        printf("Enter word: ");
        pWord = malloc(20*sizeof(char)+1);
        len = read_word(&pWord, WORD_LEN);
        if (len == 0)
            break;
     /*   
        for (i = 0; i < num_words; i++ )
            if (strcmp(pWord, words[i]) < 0)
                break;
        for (j = num_words; j > i; j--)
            words[j] = words[j-1];
    */
        i = num_words;
        printf("i=%d\n", i);
        words[i] = pWord;

        num_words++;
    }
    qsort(words, num_words, sizeof(char *), compare_parts);

    printf("\nIn sorted order: ");
    for (i = 0; i < num_words; i++)
    {
        printf(" %s", words[i]);
        free(words[i]);
    }
    printf("\n");
    return 0;
}
int compare_parts(const void *p, const void *q)
{
    return strcmp(*(char**)p, *(char**)q);
}
int read_word(char **word, int n){
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            (*word)[i++] = ch;
    (*word)[i] = '\0';
    return i;
}
