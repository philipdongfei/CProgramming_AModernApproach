#include    <stdio.h>
#include    <ctype.h>

int main(void)
{
    char ch = '\0', ch1 = '\0', ch2 = '\0';
    int pos = 0;

    printf("Enter a first and last name: ");

    while ((ch = getchar()))
    {
        if (ch != ' ')
        {
            if (pos == 0)
            {
               ch2 = ch; 

                ++pos;
            }
        }
        else
        {
            if (pos > 0)
                break;
        }
        //printf("%c", ch);
        
    }
    printf("\n");

    while ((ch1 = getchar()) != '\n')
    {
        if (ch1 != ' ')
        {
            printf("%c", ch1);

        }
    }
    printf(", %c.\n", ch2);

    return 0;
}
