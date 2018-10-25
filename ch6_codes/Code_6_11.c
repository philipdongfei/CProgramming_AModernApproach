#include    <stdio.h>

int main(void)
{
    float e = 1.0f, n = 0.0f;

    printf("Enter the n: ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++)
    {
        float v = 1.0f;
        for (int j = 1; j <= i; j++)
        {
            v *= j;
        }
        v = 1.0f / v;
        e += v;
    }

    printf("e = %f\n", e);

}
