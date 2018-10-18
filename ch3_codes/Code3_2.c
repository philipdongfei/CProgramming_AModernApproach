#include    <stdio.h>

int main(void)
{
    int number, year, month, day;
    float price;

    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\t\n");
    printf("\t\tPrice\t\tDate\t\n");
    printf("%d\t\t$%6.2f\t\t%2d/%2d/%4d\t\n", number, price, month, day, year);

    return 0;
    
}
