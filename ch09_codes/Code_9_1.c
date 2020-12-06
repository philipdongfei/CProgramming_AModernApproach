#include    <stdio.h>


void selection_sort(int n, int a[]);


int main(void)
{
    int a[32] = {0,}, n = 10;

    printf("Enter some numbers(1-32): ");
    scanf("%d%d%d%d%d%d%d%d%d%d", 
            &a[0],&a[1],&a[2],&a[3],&a[4],
            &a[5],&a[6],&a[7],&a[8],&a[9]);
    selection_sort(n, a);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;

}

void selection_sort(int n, int a[])
{
    if (n == 1) return;
    int max = 0, temp;

    for (int i = 1; i < n; i++)
    {
        if (a[max] < a[i])
            max = i;
    }
    temp = a[n-1];
    a[n-1] = a[max];
    a[max] = temp;
    selection_sort(n-1, a);
}


