#include    <stdio.h>

int main(void)
{
    int matrix[5][5], rowsum[5] = {0}, columnsum[5] = {0}, 
        i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i+1);
        for (j = 0; j < 5; j++)
        {
            scanf("%d",&matrix[i][j]);

        }    
    }
    
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            rowsum[i] += matrix[i][j];
            columnsum[i] += matrix[j][i]; 
        }    
    }
    printf("Row totals: ");
    for (i = 0; i < 5; i++)
        printf("%d ", rowsum[i]);
    printf("\nColumn totals: ");
    for (i = 0; i < 5; i++)
        printf("%d ", columnsum[i]);
    printf("\n");

    
    return 0;
}
