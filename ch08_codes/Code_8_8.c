#include    <stdio.h>

int main(void)
{
    double matrix[5][5], totalPoints[5] = {0.0}, 
        avgClass[5] = {0.0}, maxClass[5] = {0.0}, 
        minClass[5] = {100.0, 100, 100, 100, 100}; 
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Enter Students %d's 5 grades: ", i+1);
        for (j = 0; j < 5; j++)
        {
            scanf("%lf",&matrix[i][j]);

        }    
    }
    
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            totalPoints[i] += matrix[i][j];
            avgClass[i] += matrix[j][i]; 
            if (maxClass[i] < matrix[j][i])
                maxClass[i] = matrix[j][i];
            if (minClass[i] > matrix[j][i])
                minClass[i] = matrix[j][i];

        }    
    }
    printf("Student totals: ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", totalPoints[i]);
    printf("\nStudent avg: ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", totalPoints[i]/5.0);
    printf("\n");
    printf("Class avg: ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", avgClass[i]/5.0);
    printf("\n");
    printf("Class max: ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", maxClass[i]);
    printf("\n");
    printf("Class min: ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", minClass[i]);

    printf("\n");

    
    return 0;
}
