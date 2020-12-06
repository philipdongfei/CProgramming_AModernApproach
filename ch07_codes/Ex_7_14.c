#include    <stdio.h>

int main(void)
{
    float frac_part, f;
    frac_part = 0.0;
    f = 14.23456;

    frac_part = f - (int)f;

    printf("%f\n", frac_part);

    return 0;
}
