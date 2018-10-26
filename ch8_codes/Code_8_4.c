/* Reverses a series of numbers. */

#include    <stdio.h>

#define N  5 

int main(void)
{
    int a[N], i, len;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    len = (int)(sizeof(a)/sizeof(a[0]));
    printf("In reverse order:");
    for (i = len - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}
