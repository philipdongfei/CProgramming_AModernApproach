#include    <stdio.h>

float compute_GPA(char grades[], int n)
{
    double gpa = 0, avg = 0;
    int points[5] = {4,3,2,1,0};

    for (int i = 0; i < n; i++)
    {
        gpa += points[grades[i] - 'A'];
    }
    avg = gpa / n;

    return avg;
}

int main(void)
{
    char grades[5] = {'A', 'B','C','D','A'};

    printf("avg = %f\n", compute_GPA(grades, 5));

    return 0;
}
