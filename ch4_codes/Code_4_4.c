#include    <stdio.h>

int main(void)
{
    int number, ocx[6] = {0}, t=0;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    if ( number < 0 || number > 32767 )
        return 1;
    printf("In octal, your number is: ");
    while(number >= 8)
    {
        int i = number % 8;
        number /= 8;
        printf("%d", i);
        ocx[t] = i;
        ++t;
    }
    printf("%d\n", number);
    ocx[t] = number;

    for (int j=5; j>=0; j--)
        printf("%d", ocx[j]);
    return 0;
}
