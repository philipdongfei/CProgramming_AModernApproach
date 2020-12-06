#include    <stdio.h>

int main(void)
{
    int fib_number[40] = {1,1,};

    for (int i=2; i<40; i++)
    {
        fib_number[i] = fib_number[i-1] + fib_number[i-2];

    }
    for (int j=0; j<40; j++)
    {
        printf("%d ", fib_number[j]);
    }
    printf("\n");

    return 0;
}
