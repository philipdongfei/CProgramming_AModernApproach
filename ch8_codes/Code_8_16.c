#include    <stdio.h>
#include    <ctype.h>

int main(void)
{
    int showLetter[26] = {0,};
    char ch;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            showLetter[ch - 'a'] += 1;
        }
    }
    printf("Enter second word: ");
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);
            showLetter[ch - 'a'] -= 1;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (showLetter[i] != 0)
        {
            printf("The words are not anagrams\n");
            return 0;
        }
    }
    printf("The words are anagrams\n");
    return 0;
}
