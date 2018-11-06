#include    <stdio.h>

#define N 10

int *find_largest(int a[], int n)
{
    int *max = a;
    for (int *p = a+1; p < a + n; p++)
    {
        if (*max < *p)
            max = p;
    }
    return max;
}
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
