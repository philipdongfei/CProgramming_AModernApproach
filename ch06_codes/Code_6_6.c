#include    <stdio.h>

int main(void)
{
    int n, value;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i*i <= n; i++)
    {
        if (i % 2 == 0)
        {
            value = i * i;
            printf("%d\n", value);
        }

    }
    for (int i = 2; i * i <= n; i += 2)
        printf("%d\n", i * i);

    return 0;
}
