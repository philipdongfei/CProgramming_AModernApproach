#include    <stdio.h>

unsigned short swap_bytes(unsigned short i);

int main(void)
{
    unsigned short n;
    printf("Enter a hexadecimal number (up to four digits): ");
    scanf(" %hx", &n);
    n = swap_bytes(n);
    printf("Number with bytes swapped: %hx\n", n);

    return 0;
}

unsigned short swap_bytes(unsigned short i)
{
#if 0
    /* A*/
    unsigned short right_byte = (i << 8),
                   left_byte = (i >> 8);
    return right_byte | left_byte;

#endif
    return ((i << 8)| (i >> 8));
}
