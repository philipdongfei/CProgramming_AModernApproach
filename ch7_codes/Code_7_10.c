#include    <stdio.h>
#include    <ctype.h>

int main(void)
{
    char ch;
    int amount = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
    {
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
    }
    printf("Your sentence contains %d vowels.\n", amount);
    return 0;
}
