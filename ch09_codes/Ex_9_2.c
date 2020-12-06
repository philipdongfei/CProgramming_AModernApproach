#include    <stdio.h>

int check(int x, int y, int n)
{
    if ((x >= 0 && x <= n-1) && (y >= 0 && y <= n-1))
        return 1;
    return 0;
}

int main(void)
{
    int x, y, n;

    printf("Enter three number: ");
    scanf("%d%d%d", &x, &y, &n);

    printf("%d %d %d, %d\n", x, y, n, check(x, y, n));

    return 0;
}
