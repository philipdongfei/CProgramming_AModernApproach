#include    <stdio.h>

int main(void)
{
    int square[99][99];
    int n = 0, x = 0, y = 0, 
        oldx = 0, oldy = 0;

    for (int i = 0; i < 99; i++) {
        for (int j = 0; j < 99; j++)
            square[i][j] = 0;
    }

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size fo magic square: ");
    scanf("%d", &n);
    if (n < 1 || n > 99)
        return 1;
    if (n % 2 == 0)
        return 1;
    x = n/2;
    y = 0;
    for (int i = 0; i < n*n; i++)
    {
        square[y][x] = i + 1;
        printf("[%d %d] = %d\n", y, x, square[y][x]);
        oldx = x;
        oldy = y;
        if ((x+1) == n)
            x = 0;
        else
            x += 1;
        if ((y-1) < 0)
            y = n - 1;
        else 
            y -= 1;
        if (square[y][x] != 0)
        {
            x = oldx;
            y = oldy + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%3d ", square[i][j]);
        printf("\n");
    }

    return 0;
}
