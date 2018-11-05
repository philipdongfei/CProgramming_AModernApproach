#include    <stdio.h>

void reduce(int numerator, int denominator, 
            int *reduced_numerator,
            int *reduced_denominator);

int main(void)
{
    int a, b, reducen, reduced;

    printf("Enter two integers: ");
    scanf("%d/%d", &a, &b);

    int x = a, y = b;
    reduce(x, y, &reducen, &reduced);

    printf("reduce: %d:%d\n", reducen, reduced);

    return 0;
}


void reduce(int numerator, int denominator, 
            int *reduced_numerator,
            int *reduced_denominator)
{
    int a = numerator, b = denominator, gcd;
    while (b != 0)
    {
        gcd = a % b;
        a = b;
        b = gcd;
    }
    *reduced_numerator = numerator;
    *reduced_denominator = denominator;
    *reduced_numerator /= a;
    *reduced_denominator /= a;

}


