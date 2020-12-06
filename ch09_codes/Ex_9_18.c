#include    <stdio.h>


int gcd(int a, int b)
{
    if (b == 0) return a;
    int t = b;
    b = a % b;
    a = t;
    return gcd(a, b);
}

int main(void)
{
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("gcd=%d\n", gcd(a, b));

    return 0;
}
