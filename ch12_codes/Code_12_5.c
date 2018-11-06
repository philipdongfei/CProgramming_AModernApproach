#include    <stdio.h>

int main(void)
{
    char sentence[256] = {0}, ch1, *pCurrent;
    int pos = 0, word_len = 0, j = 0;

    printf("Enter a sentence: ");
    pCurrent = &sentence[0];
    while ((ch1 = getchar()) != '\n')
    {
        printf("%c", ch1);
        if (ch1 == '.' || ch1 == '?' || ch1 == '!')
            break;
        //sentence[pos] = ch1;
        *pCurrent = ch1;
        pCurrent++;
        //pos++;
    }
    printf("\n");

    printf("Reversal of sentence: ");

    for (char *last = pCurrent-1; last >= &sentence[0]; last--)
    {
        if (*last != ' ')
            word_len++;
        else {
            char *word;
            for (word = last+1; word < (last+1+word_len); word++)
            {
                printf("%c", *word);
            }
            word_len = 0;
            printf(" ");
        }

    }
    for(char *w = &sentence[0];  w < &sentence[word_len]; w++)
        printf("%c", *w);
    printf("%c\n", ch1);

    return 0;

}
