#include    <stdio.h>
#include    <math.h>

#define ADD(x,y)  (x+y)
#define DISP(f,x) printf("f(%g) = %g\n",x, f(x))
#define DISP2(f,x,y) printf("f(%g,%g) = %g\n",x,y,f(x,y) )

int main(void)
{
    DISP(sqrt,3.0);
    DISP2(ADD, 4.0, 5.0);

    return 0;

}


