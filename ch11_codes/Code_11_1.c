#include    <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main()
{
    int amount, twen, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    pay_amount(amount, &twen, &tens, &fives, &ones);

    printf("20$ = %d, 10$ = %d, 5$ = %d, 1$ = %d\n", 
            twen, tens, fives, ones);

    return 0;

}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars -= 20 * (*twenties);
    *tens = dollars / 10;
    dollars -= 10 * (*tens);
    *fives = dollars / 5;
    dollars -= 5 * (*fives);
    *ones = dollars ;
    if (dollars == 0)
        printf("right\n");
    else
        printf("error\n");

}
