#include    <stdio.h>
#include    <math.h>
#include    <fenv.h>

#pragma STDC FP_FAST_FMA ON

#define LENGTH 4

double evaluate_polynomial(double a[], int n, double x)
{
    double db = fma(a[n-1],x,a[n-2]);
    for (int i= n-2; i > 0; i--)
    {
        printf("%d:%f\n", i, db);
        db = fma(db,x,a[i-1]);
    }
    return db;

}

int main(void)
{
    double a[LENGTH] = {0,}, x;
    for (int i = 1; i < LENGTH+1; i++)
        a[i-1] = (double)i;
    x = 1;

    printf("%f\n", evaluate_polynomial(a, LENGTH, x));

    return 0;
}
