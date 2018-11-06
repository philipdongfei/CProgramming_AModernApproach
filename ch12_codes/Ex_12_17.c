/*
int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int i, j, sum = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < LEN; j++)
            sum += a[i][j];

    return sum;
}
*/
#include    <stdio.h>

#define LEN 3

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int (*i)[LEN], *j=NULL, sum = 0;

    for (i = a; i < a + n; i++) {
        int *q = i;
        for (j = q; j < q + LEN; j++)
        {
            //printf("j=%d\n", *j);
            sum += (*j);
        }
    }
    return sum;
}

int main(void)
{
    int two[2][LEN] = {{1,2,3},{4,5,6}};
    int (*x)[LEN], *y, *p;
    p = two;
    for (x = &two[0]; x < &two[2]; x++)
    {
        int *q = x;
        for (y = q; y < q + LEN; y++) {
            printf("%d ", *y);
        }
        printf("\n");
    }

    printf("%d\n", sum_two_dimensional_array(two, 2));

    return 0;

}
