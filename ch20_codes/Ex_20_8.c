#include    <stdio.h>

unsigned int  f(unsigned int i, int m, int n)
{
    return (i >> (m + 1 - n)) & ~(~0 << n);

}

int main(void)
{
    unsigned short i;
    printf("Enter a hexadecimal number :"); 
    scanf(" %hx", &i);
    printf("%hx\n", f(i, 6, 2));

    return 0;
}
