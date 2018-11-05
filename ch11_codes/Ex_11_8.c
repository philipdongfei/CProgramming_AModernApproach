#include    <stdio.h>

#define     N 10    
int *find_largest(int a[], int n);

int main(void)
{
    int n = N, b[N];
    int *plargest;

    printf("Ented %d numbers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    plargest = find_largest(b, n);

    printf("largest: %d\n", *plargest);
    
    return 0;
}

int *find_largest(int a[], int n)
{
    int *pMax = &a[0];
    for (int i = 1; i < n; i++)
    {
        if (*pMax < a[i])
            pMax = &a[i];
    }
    return pMax;
}
