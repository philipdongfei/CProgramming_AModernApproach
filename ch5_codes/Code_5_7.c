#include    <stdio.h>

int main(void)
{
    int max, min, num[4];
    

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);

    max = min = num[0];
    for (int i = 1; i < 4; i++)
    {
        if (num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }
    printf("max:%d, min:%d\n", max, min);

    return 0;
}
