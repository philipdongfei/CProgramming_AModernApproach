#include    <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d%1d", &a, &b, &c);

    printf("The reversal is: %1d%1d%1d\n", c, b, a);

    return 0;

}
