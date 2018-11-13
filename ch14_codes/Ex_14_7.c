#include    <stdio.h>

typedef unsigned long   ULONG;

#define GENERIC_MAX(type)   \
    type type##_max(type x, type y) \
    {                               \
        return x > y ? x : y;       \
    }

static GENERIC_MAX(long);
static GENERIC_MAX(ULONG);


int main(void)
{
    long x, y;
    ULONG a,b;

    x = 10000, y = 20000;
    a = 3000000, b = 2310000;
    printf("%ld\n",long_max(x,y));
    printf("%lu\n", ULONG_max(a,b));

    return 0;
}
