/* Checks numbers for repeated digits. */

#include    <stdbool.h>    // C99 only
#include    <stdio.h>

int main(void)
{
    int digit_seen[10] = {0};
    int digit;
    long n;

    while(1) {
        printf("Enter a number: ");
        scanf("%ld", &n);
        if (n <= 0)
            return 0;

        while (n > 0) {
            digit = n % 10;
            digit_seen[digit] += 1;
            n /= 10;
        }


        printf("Digit:\t\t");
        for (int i = 0; i < 10; i++)
            printf("%d ", i);

        
        printf("\nOccurrences:\t");
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", digit_seen[i]);
        }
        printf("\n");
    }

    return 0;
}

