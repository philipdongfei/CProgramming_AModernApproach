#include    <stdio.h>

int main(void)
{
    float max = 0.0f, n = 0.0f;

    do {
        printf("Enter a number: ");
        scanf("%f", &n);
        if (n > max)
            max = n;

    } while (n > 0);
    printf("The largest number entered was %f\n", max);

    return 0;

}
