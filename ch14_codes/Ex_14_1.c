#include    <stdio.h>

#define MySqrt(x) (x*x)
#define MyMod(N)  (N%4)
#define MyJudge(x,y)    ((x)*(y)<100?1:0)


int main(void)
{
    int x, N, y;
    x = 20;
    printf("x*x=%d\n", MySqrt(x));
    N = 30;
    printf("N mod 4=%d\n", MyMod(N));
    y = 4;
    printf("x < y: %d\n", MyJudge(x,y));

    return 0;
}
