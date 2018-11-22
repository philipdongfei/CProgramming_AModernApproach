#include    <stdio.h>

#define M(x,y)  ((x)^=(y), (y)^=(x), (x)^=(y))

int main(void)
{
    int x = 2, y = 3;

    M(x,y);
    printf("x=%d,y=%d\n", x, y);

    return 0;
}
