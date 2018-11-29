#include    <math.h>

/* return logb(k) */
double log_base(double x, double b)
{
    return log(x)/log(b);
}

double round_nearest(double x)
{
    return x < 0.0 ? ceil(x - 0.5) : floor (x + 0.5);
}
