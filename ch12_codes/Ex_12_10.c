#include    <stdio.h>

int *find_middle(int a[], int n) {
    int *p = a;
    return (p+n/2);
}

int main(void)
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};

    int *m = find_middle(a, 10);

    printf("middle: %d\n", *m);

    return 0;
}
