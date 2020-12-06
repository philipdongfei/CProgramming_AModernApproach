#include    <stdio.h>

int main(void)
{
    char ch = '\0';
    char phone_num[16] = {0,};
    int pos = 0;

    printf("Enter phone number: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'A' && ch <= 'C')
        {
            phone_num[pos] = '2';
            printf("2");
        }
        else if (ch >= 'D' && ch <= 'F')
            printf("3");
        else if (ch >= 'G' && ch <= 'I')
            printf("4");
        else if (ch >= 'J' && ch <= 'L')
            printf("5");
        else if (ch >= 'M' && ch <= 'O')
            printf("6");
        else if (ch >= 'P' && ch <= 'S')
            printf("7");
        else if (ch >= 'T' && ch <= 'V')
            printf("8");
        else if (ch >= 'W' && ch <= 'Z')
            printf("9");
        else
            printf("%c", ch);

    }
    printf("\n");

    return 0;
}
