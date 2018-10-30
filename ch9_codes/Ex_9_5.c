#include    <stdio.h>


int num_digits(int n)
{
    int num = 1;

    while ((n = n / 10 ) != 0)
        ++num;

    return num;
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d digits = %d\n", n, num_digits(n));

    return 0;
}
