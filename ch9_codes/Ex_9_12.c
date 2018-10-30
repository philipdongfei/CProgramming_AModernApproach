#include    <stdio.h>

double inner_product(double a[], double b[], int n)
{
    double product;

    for (int i = 0; i < n; i++)
    {
        product += (a[i] * b[i]);
    }

    return product;
}
