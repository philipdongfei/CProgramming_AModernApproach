#include    <stdio.h>

int main(void)
{
    char sentence[256] = {0}, ch1;
    int pos = 0, word_len = 0, j = 0;

    printf("Enter a sentence: ");
    while ((ch1 = getchar()) != '\n')
    {
        printf("%c", ch1);
        if (ch1 == '.' || ch1 == '?' || ch1 == '!')
            break;
        sentence[pos] = ch1;
        pos++;
    }
    printf("\n");

    printf("Reversal of sentence: ");
    for (j = pos-1; j >= 0; j--)
    {
        if (sentence[j] != ' ')
            word_len++;
        else {
            for (int p = j+1; p < (j+1+word_len); p++)
            {
                printf("%c", sentence[p]);
            }
            word_len = 0;
            printf(" ");
        }

    }
    for(j = 0; j < word_len; j++)
        printf("%c", sentence[j]);
    printf("%c\n", ch1);

    return 0;

}
