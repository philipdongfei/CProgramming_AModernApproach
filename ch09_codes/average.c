/* Computes pairwise averages of three numbers */

#include    <stdio.h>

int sum_two_dimensional_array(int n, int m, int a[n][m]);

double average(double a, double b)
{
    return (a + b) / 2;
}

int main(void)
{
    double x, y, z;
    int result;

    printf("Enter three numbers: ");
    result = scanf("%lf%lf%lf", &x, &y, &z);
    if (result == 0)
        return 1;
    printf("Average of %g and %g: %g\n", x, y, average(x, y));
    printf("Average of %g and %g: %g\n", y, z, average(y, z));
    printf("Average of %g and %g: %g\n", x, z, average(x, z));

    return 0;

}

int sum_two_dimensional_array(int n, int m, int a[n][m])
{
    int i, j, sum = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            sum += a[i][j];

    return sum;
}
