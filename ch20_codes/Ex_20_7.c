#include    <stdio.h>

unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i, int n);

int main(void)
{
    unsigned int i, n;
    printf("Enter a hexadecimal number (up to eight digits): ");
    scanf(" %x", &i);
    printf("Enter a shift number: ");
    scanf(" %d", &n);

    printf("left %d: 0x%x\n", n, rotate_left(i, n));
    printf("right %d: 0x%x\n", n, rotate_right(i, n));

    return 0;

}

unsigned int rotate_left(unsigned int i, int n)
{
    unsigned int left_byte = i << n;
    unsigned int right_byte = i >> (32-n);
    return left_byte | right_byte;
}
unsigned int rotate_right(unsigned int i, int n)
{
    unsigned int left_byte = i << (32-n);
    unsigned int right_byte = i >> n;
    return left_byte | right_byte;
}
