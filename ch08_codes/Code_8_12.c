#include    <stdio.h>
#include    <ctype.h>


int main(void)
{
    char ch='\0';
    int points = 0, letter_point[26] = {0};

    for (int i = 0; i < 26; i++)
    {
        ch = 'A' + i;
        switch(ch)
        {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                letter_point[ch-'A'] =  1;
                break;
            case 'D': case 'G':
                letter_point[ch-'A'] =  2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                letter_point[ch-'A'] =  3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                letter_point[ch-'A'] =  4;
                break;
            case 'K':
                letter_point[ch-'A'] =  5;
                break;
            case 'J': case 'X':
                letter_point[ch-'A'] =  8;
                break;
            case 'Q': case 'Z':
                letter_point[ch-'A'] =  10;
                break;
            default:
                break;
        }
    }
    ch = '\0';

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        points += letter_point[ch-'A'];

    }
    printf("Scarbble value: %d\n", points);
    return 0;
}
