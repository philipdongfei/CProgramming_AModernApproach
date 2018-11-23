#include    <stdio.h>

#define CHAR_BIT 8

typedef unsigned int type;
unsigned int reverse_bits(unsigned int n);
unsigned int reverse_bits1(unsigned int n);

int main(void)
{
    unsigned int num;
    printf("Enter a Number: ");
    scanf(" %x", &num);
    printf("reverse bit: %x\n", reverse_bits(num));
    printf("reverse bit: %x\n", reverse_bits1(num));

    return 0;
}
unsigned int reverse_bits1(unsigned int n)
{
    
    type r = n & 1;
    int s = sizeof(n)*CHAR_BIT - 1;
    
    for (n >>= 1; n; n >>= 1)
    {
        r <<= 1;
        r |= n & 1;
        s--;
    }
    r <<= s;
    return r;
}

unsigned int reverse_bits(unsigned int n)
{
    type reverse_n = 0;
    int i;
    static int bits = sizeof(type)*8;
    int offset = bits - 1;
    for (i = 1; i <= bits/2; i++)
    {
        reverse_n |= (1 << (bits-i)) & (n << offset);
        offset -= 2;
    }
    offset += 2;

    for (; i <= bits; i++)
    {
        reverse_n |= (1 << (bits-i)) & (n >> offset);
        offset += 2;
    }
    return reverse_n;

}


