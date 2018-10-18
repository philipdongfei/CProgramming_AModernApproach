#include    <stdio.h>

int main(void)
{
    int values[16], row[4], column[4], diagsum[2],  i;
    for(i=0; i<4; i++)
    {
        row[i] = 0;
        column[i] = 0;
        if (i < 2)
            diagsum[i] = 0;

    }   


    printf("Enter the numbers from 1 to 16 in any order: ");
    for (i = 0; i < 16; i++)
        scanf("%d", &(values[i]));

    for (i = 0; i < 16; i++)
    {
        if (i % 4 == 0)
        {
            printf("\n%-4d", values[i]);
        }
        else
            printf("%-4d", values[i]);

        if (i < 4)
            row[0] += values[i];
        else if (i < 8 && i >= 4)
            row[1] += values[i];
        else if (i < 12 && i>= 8)
            row[2] += values[i];
        else
            row[3] += values[i];

        if ((i+1)%4 == 1)
            column[0]+= values[i];
        else if ((i+1)%4 == 2)
            column[1] += values[i];
        else if ((i+1)%4 == 3)
            column[2] += values[i];
        else 
            column[3] += values[i];

        if (i%5 == 0)
            diagsum[0] += values[i];
        else if (i%3 == 0)
            diagsum[1] += values[i];


    }
    printf("\n"); 
    printf("Row sums: %d %d %d %d\n", row[0], row[1], row[2], row[3]);
    printf("Column sums: %d %d %d %d\n", column[0], column[1], column[2], column[3]);
    printf("Diagonal sums: %d %d\n", diagsum[0], diagsum[1]);


    return 0;
}
