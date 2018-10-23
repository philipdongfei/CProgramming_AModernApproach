#include    <stdio.h>

int main(void)
{
    int a, b, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        gcd = a % b;
        a = b;
        b = gcd;
    }
    printf("gcd = %d\n", a);

    return 0;
}
