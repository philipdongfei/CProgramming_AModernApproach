#include    <stdio.h>

int main()
{
    float amount, interest_rate, monthly_payment, remain;


    printf("Enter amount of loan: ");
    scanf("%f",&amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);


    remain = amount;
    //for (int i = 0; i < 3; i++) {
    int i = 0;
    while(remain > 0.0f) {
        remain = (remain - monthly_payment) + (remain*(interest_rate/100.0f)/12.0f);
        //amount = remain;
        if (remain < 0.0f)
            remain = 0.0f;
        printf("Balance remaining after %d payment: $%.3f\n", i+1, remain);
        ++i;

    }
    printf("Total amount: %.2f\n", i*monthly_payment);
    return 0;

}
