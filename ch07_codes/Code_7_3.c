/* Sum2 a series of numbers (using long int variables) */

#include    <stdio.h>

int main(void)
{
    double n;
    double sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0.0) {
        sum +=n;
        scanf("%lf", &n);
    }
    printf("The sum is: %lf\n", sum);

    return 0;
}

