#include    <stdio.h>
#include    <ctype.h>


int main(void)
{
    char ch='\0';
    int points = 0;

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                points += 1;
                break;
            case 'D':
            case 'G':
                points += 2;
                break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                points += 3;
                break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                points += 4;
                break;
            case 'K':
                points += 5;
                break;
            case 'J':
            case 'X':
                points += 8;
                break;
            case 'Q':
            case 'Z':
                points += 10;
                break;
            default:
                break;
        }

    }
    printf("Scarbble value: %d\n", points);
    return 0;
}
