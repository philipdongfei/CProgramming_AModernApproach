#include    <stdio.h>

int main(void)
{
    int words = 0, letters = 0;
    double average = 0.0;
    char ch;

    printf("Enter a sentence: ");

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

    printf("Average word length: %.1f\n", average);

    return 0;

}
