#include    <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int i = 1, j = 2;

    printf("i=%d, j=%d\n", i, j);
    swap(&i, &j); /* exchange values of i and j */
    printf("i=%d, j=%d\n", i, j);

    return 0;
}

void swap(int *p, int *q)
{
    int temp;
    temp = *q;
    *q = *p;
    *p = temp;
}

