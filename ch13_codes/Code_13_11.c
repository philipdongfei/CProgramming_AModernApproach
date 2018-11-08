#include    <stdio.h>

double compute_average_word_length(const char *sentence);


int main(void)
{
    double average = 0.0;
    char ch, sentence[256] = {0,}, *pSentence;

    pSentence = sentence;
    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {
        *pSentence++ = ch;

    }
    average = compute_average_word_length(sentence);


#if 0
    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ' || ch == '.')
        {
            ++words;
            if (ch == '.')
                ++letters;
        }
        else
            ++letters;
    }
    average = (double)letters/words;
#endif

    printf("Average word length: %.1f\n", average);

    return 0;

}

double compute_average_word_length(const char* sentence)
{
    char *pPoint = sentence, ch;
    int words = 0, letters = 0;

    while ((ch =*pPoint++) != '\0') {
        if (ch == ' ' || ch == '.')
        {
            ++words;
            if (ch == '.')
                ++letters;
        }
        else
            ++letters;
    }

    return (double)letters / words;
}
