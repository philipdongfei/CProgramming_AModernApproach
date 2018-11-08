#include    <stdio.h>

#define  GENERIC_MAX(type)    \
    type type##_max(type x, type y) \
    {                               \
        return x > y ? x : y;       \
    }                               \

#define PRINT_INT(n)  printf(#n " = %d\n", n)
#define MAX(x, y)   ((x)>(y)?(x):(y))
#define IS_EVEN(n) ((n)%2==0)
#define TOUPPER(c)  ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

static GENERIC_MAX(float);
static GENERIC_MAX(int);
int main(void)
{
    int x, y, i;
    float a, b;
    x = 1;y = 2;
    printf("max: %d\n",int_max(x, y) );
    a = 1.2222; b = 0.2222;
    printf("max: %f\n", float_max(a, b));

    PRINT_INT(y/x);
    i = MAX(x+1, y+3);
    if (IS_EVEN(i)) i++;
    printf("i=%d\n", i);
    
    
    return 0;
}
