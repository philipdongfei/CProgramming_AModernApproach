#include    <stdio.h>

int main(void)
{
    int i = 1, a, b, c, d;

    a = b = c = d = i;

    if ((++a) == (c += 1))
        printf("1\n");
    else
        printf("2\n");

    if ((b++) == (d += 1))
        printf("3\n");
    else
        printf("4\n");

    return 0;
    
}
