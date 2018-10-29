#include    <stdio.h>
#include    <ctype.h>


int main(void)
{
    char input[256] = {0}, chIn='\0', chOut='\0';
    int nIndex = 0;

    printf("Enter message: ");
    while ((chIn = getchar()) != '\n')
    {
        input[nIndex] = toupper(chIn);
        ++nIndex;
        if (nIndex >= 255)
            break;
    }

    printf("\nIn BIFF-speak: ");
    nIndex = 0;
    while ((chIn = input[nIndex++]))
    {
        switch(chIn)
        {
        case 'A':
            chOut = '4';
            break;
        case 'B':
            chOut = '8';
            break;
        case 'E':
            chOut = '3';
            break;
        case 'I':
            chOut = '1';
            break;
        case 'O':
            chOut = '0';
            break;
        case 'S':
            chOut = '5';
            break;
        default:
            chOut = chIn;
            break;
        }
        printf("%c", chOut);

    }
    for (int i = 0; i < 10; i++)
        printf("!");
    printf("\n");

    return 0;
}
