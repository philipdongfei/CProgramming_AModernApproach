#include    <stdio.h>


double inner_product(const double *a, const double *b, int n)
{
    double *pa, *pb;
    double result = 0.0;

    for (pa = a, pb = b; pa < a + n && pb < b + n; pa++, pb++)
    {
        //printf("pa=%f, pb=%f\n", *pa, *pb);
        result += ((*pa) * (*pb));
    }
    return result;
}

int main(void)
{
    double a[5] = {1.0, 2.0, 3.0, 4.0, 5.0}, 
           b[5] = {5.0, 2.0, 3.0, 2.0, 1.0};

    printf("inner_product: %f\n", inner_product(a, b, 5));

    return 0;
}
