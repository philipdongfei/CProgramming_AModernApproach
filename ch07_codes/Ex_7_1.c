#include    <stdio.h>

int main(void)
{
    int v;

    v = 077;
    printf("v=%d\n", v);
    v = 0x77;
    printf("v=%d\n", v);
    v = 0xABC;
    printf("v=%d\n", v);

    return 0;
}
