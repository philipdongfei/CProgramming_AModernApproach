#include    <stdio.h>

int main(void)
{
    int number, a, b;
    char tens[10][10] = {"","", "twenty", "thirty", "fourty", 
    "fivety", "sixty", "seventy", "eighty", "ninety"};
    char single[10][10] = {"", "one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine"};
    char special[10][10] ={"","eleven","twelve", "thirteen", "fourteen", "fifteen",
    "sixteen", "seventeen", "eighteen", "ninteen"};

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number < 10 || number > 99)
    {
        printf("Illegal number\n");
        return 1;
    }

    a = number / 10;
    b = number % 10;

    if (number < 20)
    {
        printf("You entered the number %s\n", special[number-10]);
#if 0
        switch(number) {
            case 11: printf("You entered the number eleven\n");
                     break;
            case 12: printf("You entered the number twelve\n");
                     break;
            case 13: printf("You entered the number thirteen\n");
                     break;
            case 14: printf("You entered the number fourteen\n");
                     break;
            case 15: printf("You entered the number fifteen\n");
                     break;
            case 16: printf("You entered the number sixteen\n");
                     break;
            case 17: printf("You entered the number seventeen\n");
                     break;
            case 18: printf("You entered the number eighteen\n");
                     break;
            case 19: printf("You entered the number ninteen\n");
                     break;
            default: break;
        }
#endif
    }
    else
        printf("You entered the number %s-%s\n", tens[a], single[b]);

    return 0;
}
