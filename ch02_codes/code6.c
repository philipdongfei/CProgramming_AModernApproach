#include    <stdio.h>

float mypower(float v, int p)
{
    float pvalue = 1.0;
    for(int i=0; i<p; i++)
        pvalue *= v;
    return pvalue;

}
int main()
{
    float x, v;

    printf("Enter the x: ");
    scanf("%f", &x);

    v = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("value: %f\n", v);
    
    return 0;
}
