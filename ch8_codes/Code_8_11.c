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
        {
            phone_num[pos] = '3';
            printf("3");
        }
        else if (ch >= 'G' && ch <= 'I')
        {
            phone_num[pos] = '4';
            printf("4");
        }
        else if (ch >= 'J' && ch <= 'L')
        {
            phone_num[pos] = '5';
            printf("5");
        }
        else if (ch >= 'M' && ch <= 'O')
        {
            phone_num[pos] = '6';
            printf("6");
        }
        else if (ch >= 'P' && ch <= 'S')
        {
            phone_num[pos] = '7';
            printf("7");
        }
        else if (ch >= 'T' && ch <= 'V')
        {
            phone_num[pos] = '8';
            printf("8");
        }
        else if (ch >= 'W' && ch <= 'Z')
        {
            phone_num[pos] = '9';
            printf("9");
        }
        else
        {
            phone_num[pos] = ch;
            printf("%c", ch);
        }
        pos++;

    }
    printf("\n");
    printf("In numeric form: %s\n", phone_num);
    

    return 0;
}
