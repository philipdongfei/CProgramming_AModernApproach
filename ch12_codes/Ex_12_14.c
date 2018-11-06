/* 14,15,16 */

#include    <stdio.h>
#include    <stdlib.h>
#include    <stdbool.h>
#include    <time.h>


int find_largest(int a[], int n);

bool search(const int a[], int n, int key)
{
    int *p; 

    for (p = a; p < a + n; p++)
    {
        printf("%2d ", *p);
        if (*p == key)
        {
            printf("\n");
            return true;

        }   
    }
    printf("\n");
    return false;
}
void show_row(int *a, int row, int column, int i)
{
    int (*p)[column], *q;
    p = a;
    q = p + i;
    for (int *x = q; x < q + column; x++)
    {
        printf("%2d ", *x);
    }
    printf("\n");
    int max = find_largest(q, 24);
    printf("%d max: %d\n", i, max);
}

int main(void)
{
    int temperatures[7][24];
    srand((unsigned)time(NULL));

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 24; j++){
            temperatures[i][j] = rand() % 40;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        show_row(temperatures, 7, 24, i);
    }
    printf("\n");

    int (*p)[24], key = 32;
    for (p = &temperatures[0]; p < &temperatures[7]; p++ )
    {
        if (search(p, 24, key))
        {
            printf("find 32\n");
            break;
        }
    }
    return 0;
}

int find_largest(int a[], int n)
{
    int max = a[0];
    for (int *p = a+1; p < a + n; p++)
    {
        if (max < *p)
            max = *p;
    }
    return max;
}
