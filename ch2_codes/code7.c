#include    <stdio.h>

int main()
{
    int amount, times;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    times = amount / 20;
    printf("$20 bills: %d\n", times);
    amount -= 20 * times;
    times = amount / 10;
    printf("$10 bills: %d\n", times);
    amount -= 10 * times;
    times = amount / 5;
    printf("$5 bills: %d\n", times);
    amount -= 5 * times;
    times = amount ;
    printf("$1 bills: %d\n", times);
    amount -= times;
    if (amount == 0)
        printf("right\n");
    else
        printf("error\n");

    return 0;

}
