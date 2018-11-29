#include    <stdio.h>
#include    <stdlib.h>
#include    <errno.h>
#include    <math.h>

#define TRY_MATH_FCN(f,x) try_math_fcn(f,x, "Error in call of " #f)

double try_math_fcn(double (*f)(double), double x, const char *msg)
{
    double result;

    errno = 0;
    result = (*f)(x);
    if (errno != 0) {
        perror(msg);
        exit(EXIT_FAILURE);
    }
    return result;
}

int main(void)
{
    double y, x = -4;
    y = TRY_MATH_FCN(sqrt, x);
    printf("%f\n", y);

    return 0;
}
