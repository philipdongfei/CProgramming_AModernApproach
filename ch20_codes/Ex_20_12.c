#include    <stdio.h>


unsigned short create_short(unsigned char high_byte,
                            unsigned char low_byte)
{
    return (high_byte << 8) + low_byte;
}

int main(void)
{
    unsigned char high = 8, low = 2;
    unsigned short combined = create_short(high, low);

    printf("low: %d, high: %d\n", low, high);
    printf("combined: %d\n", combined);

    return 0;
}
