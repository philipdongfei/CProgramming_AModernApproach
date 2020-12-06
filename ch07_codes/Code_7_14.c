#include    <stdio.h>
#include    <math.h>


int main(void)
{
    double x, y = 1.0, oldy, xdy, avg_xy;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    xdy = x / y;
    avg_xy = (y + xdy)/2.0;

    oldy = y;
    y = avg_xy;
    while(fabs(oldy - y) > (0.00001*y))
    {
        xdy = x / y;
        avg_xy = (y + xdy)/2.0;
        oldy = y;
        y = avg_xy;
    //    printf("y=%lf\n", y);
    }
    printf("square root: %lf\n", y);
    
    return 0;
}
