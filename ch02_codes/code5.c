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

    v = 3 * mypower(x,5) + 2 * mypower(x,4) - 
        5 * mypower(x,3) - mypower(x,2) + 7 * x - 6;

    printf("value: %f\n", v);
    
    return 0;
}
