#include    <stdio.h>

#define TAX_PERCENT 0.05f


int main()
{
    float amount, tax;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax = amount + amount * TAX_PERCENT;

    printf("With tax added: $%.2f\n", tax);
    
    return 0;

}
