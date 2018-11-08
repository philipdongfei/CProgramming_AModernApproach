#include    <stdio.h>
#include    <ctype.h>

int compute_scrable_value(const char *sentence);

int main(void)
{
    char ch, *pch;
    int amount = 0;
    char sentence[256] = {0};
    
    pch = sentence;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
    {
        *pch++ = ch;
#if 0
        if (ch != ' ')
        {
            ch = tolower(ch);
            switch(ch)
            {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    ++amount;
                    break;
                default:
                    break;
            }
        }
#endif
    }
    amount = compute_scrable_value(&sentence[0]);
    printf("Your sentence contains %d vowels.\n", amount);
    return 0;
}

int compute_scrable_value(const char *sentence)
{
    char *pword;
    int amount = 0;

    pword = sentence;

    while (*pword != '\0') {
        char ch = *pword;
        switch(tolower(ch))
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++amount;
                break;
            default:
                break;
        }
        pword++;
    }
    return amount;
}
