/* Calculates a broker's commission */

#include    <stdio.h>

int main(void)
{
    float commission, value, 
          count, price, another_com;

    printf("Enter value of trade: ");
    scanf("%f/%f", &price, &count);

    value = price * count;
    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else 
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    if (count < 2000)
        another_com = 33.00f + count * 0.03;
    else
        another_com = 33.00f + count * 0.02;


    printf("Commission: $%.2f\n", commission);
    printf("Another Commission: $%.2f\n", another_com);

    
    return 0;
}
