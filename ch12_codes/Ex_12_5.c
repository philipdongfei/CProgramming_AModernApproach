#include    <stdio.h>

int main(void)
{
    int a[5] = {1,2,3,4,5};
    int *p;
    p = a;

#if 0
    if (p == a[0])
        printf("1 true\n");
    else
        printf("1 false\n");
#endif
    if (p == &a[0])
        printf("2 true\n");
    else
        printf("2 false\n");
    if (*p == a[0])
        printf("3 true\n");
    else
        printf("3 false\n");
    if (p[0] == a[0])
        printf("4 true\n");
    else
        printf("4 false\n");

    return 0;
}
