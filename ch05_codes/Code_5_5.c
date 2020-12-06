#include    <stdio.h>

int main(void)
{
    float input, tax;

    printf("Enter your input: ");
    scanf("%f", &input);

    if (input <= 750)
        tax = input * 0.01;
    else if (input < 2250)
        tax = 7.5 + (input - 750)*0.02;
    else if (input < 3750)
        tax = 37.50 + (input - 2250)*0.03;
    else if (input < 5250)
        tax = 82.50 + (input - 3750)*0.04;
    else if (input < 7000)
        tax = 142.50 + (input - 5250)*0.05;
    else
        tax = 230.00 + (input - 7000)*0.06;
    printf("Your tax: %.2f\n", tax);

    return 0;
}
