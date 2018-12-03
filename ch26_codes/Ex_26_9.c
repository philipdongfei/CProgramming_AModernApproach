#include    <stdio.h>
#include    <stdarg.h>
#include    <stdlib.h>
#include    <ctype.h>
#include    <string.h>

double rand_double(void)
{
    return (double) rand()/(RAND_MAX+(double)1.0);
}

int main(void)
{
    int seed;
    seed = 1202; 
    srand(seed);
    printf("%.1f\n", rand_double());

    return 0;
}
