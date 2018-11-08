#include    <stdio.h>
#include    <ctype.h>
#include    <string.h>

int main(void)
{
    char sentence[256] = {0}, ch1,
         words[30][20], (*pword)[20];
    int pos = 0, word_len = 0, i, j = 0;

    for (i = 0; i < 30; i++)
        for (j = 0; j < 20; j++)
            words[i][j] = 0;
    pword = words;
    i = j = 0;
    printf("Enter a sentence: ");
    while ((ch1 = getchar()) != '\n')
    {
        printf("%c", ch1);
        if (ch1 == '.' || ch1 == '?' || ch1 == '!')
        {
            break;
        }
        if (ch1 != ' ')
        {
            words[i][j] = ch1;
            //printf("[%d][%d]: %c\n", i, j, words[i][j]);
            j++;
        }
        else
        {
            words[i][j] = 0;
            i++;
            j = 0;
        }

        //sentence[pos] = ch1;
        //pos++;
    }
    printf("\n");

    printf("Reversal of sentence: ");

    for (int p = i; p >= 0; p--)
    {
        printf("%s ", words[p]);
    }
    printf("%c\n", ch1);
    printf("\n");
    for (pword = &words[0]+i; pword >= &words[0]; pword--)
    {
        printf("%s ", *pword);
    }

    printf("%c\n", ch1);

    return 0;

}
