#include    <stdio.h>

int main(void)
{
    int n, m;
    m = 10;

    for (n = 0; m > 0; n++)
        m /= 2;
    printf("%d %d\n", n, m);

    m = 10;
    for(n = 0; m > 0; m/=2, n++ );
    printf("%d %d\n", n, m);

    n = 13;
    if (n % 2 == 0)
        printf("n is even\n");


    return 0;

}
