#include    <stdio.h>

int compute_express(int x);

int main(void)
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Answer: %d\n", compute_express(x));

    return 0;
}

int compute_express(int x)
{
    int a = 0;
    a = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;

    return a;
}
