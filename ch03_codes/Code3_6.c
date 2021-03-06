/* Adds two factions */

#include    <stdio.h>

int gcd(int x, int y)
{
    if (x%y == 0) return y;
    else
        return (gcd(y, x%y));
}

int main(void)
{
    int num1, denom1, num2, denom2, result_num,
        result_denom, x, y, igcd;
#if 0
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);
#endif
    printf("Enter tow fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    // simplified fraction
    x = result_num;
    y = result_denom;
    if (x < y)
    {
        x = result_denom;
        y = result_num;
    }

    igcd = gcd(x, y);
    result_num /= igcd;
    result_denom /= igcd;

    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
