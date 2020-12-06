#include    <stdio.h>

int main(void)
{
    short value = 1;
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        value *= i;

    printf("Factorial of %d: %hd\n", n, value);

    return 0;

}
