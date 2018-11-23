#include    <stdio.h>

int main(void)
{
    int n = 7;

    for (int i = 0; i < 10; i++) {
        n &= n - 1;
        printf("%d: n = %x\n",i, n);
    }
    return 0;
}
