#include    <stdio.h>

int main(void)
{
    int a, b, gcd;

    printf("Enter two integers: ");
    scanf("%d/%d", &a, &b);

    int x = a, y = b;
    while (b != 0)
    {
        gcd = a % b;
        a = b;
        b = gcd;
    }
    x /= a;
    y /= a;
    printf("In lowest terms: %d/%d\n", x, y);

    return 0;
}
