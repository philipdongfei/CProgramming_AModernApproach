#include    <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
    int n = 0;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size fo magic square: ");
    scanf("%d", &n);
    if (n < 1 || n > 99)
        return 1;
    char square[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            square[i][j] = 0;
    }

    if (n % 2 == 0)
        return 1;

    create_magic_square(n,square);
    print_magic_square(n, square);

    return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
    int x = 0, y = 0, 
        oldx = 0, oldy = 0;
    x = n/2;
    y = 0;
    for (int i = 0; i < n*n; i++)
    {
        magic_square[y][x] = i + 1;
        printf("[%d %d] = %d\n", y, x, magic_square[y][x]);
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
        if (magic_square[y][x] != 0)
        {
            x = oldx;
            y = oldy + 1;
        }
    }

}

void print_magic_square(int n, char magic_square[n][n])
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%3d ", magic_square[i][j]);
        printf("\n");
    }

}
