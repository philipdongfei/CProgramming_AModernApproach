#include    <stdio.h>

int main(void)
{
    int num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    int h = 0;
    h = num / 100;
    printf("The reversal is: %d%d%d\n",  (num - h * 100) % 10, (num - h * 100) / 10, h);
    printf("The reversal is: %d%d%d\n", (num % 10), (num / 10) % 10, num / 100);

    return 0;
}
