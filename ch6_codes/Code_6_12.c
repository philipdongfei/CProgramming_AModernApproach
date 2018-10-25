#include    <stdio.h>

int main(void)
{
    float e = 1.0f, n = 1.0f, E = 0.0f;

    printf("Enter the E: ");
    scanf("%f", &E);

    while (1)
    {
        float v = 1.0f;
        for (int j = 1; j <= n; j++)
        {
            v *= j;
        }
        v = 1.0f / v;
        printf("v = %f\n", v);
        if (v < E)
            break;
        e += v;
        n += 1.0f;

    }

    printf("e = %f\n", e);

}
