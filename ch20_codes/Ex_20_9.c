#include    <stdio.h>

int count_ones_a(unsigned char ch)
{
    int count = 0;
    for (int i = 0; i < 8; i++) {
        if (ch & (1 << i))
            count++;

    }
    return count;
}

int count_ones_b(unsigned char ch) {
    return (ch & 1) + 
        ((ch >> 1) & 1) +
        ((ch >> 2) & 1) +
        ((ch >> 3) & 1) +
        ((ch >> 4) & 1) +
        ((ch >> 5) & 1) +
        ((ch >> 6) & 1) +
        ((ch >> 7) & 1); 

}

int main(void)
{
    unsigned char num;
    printf("Enter a value: ");
    scanf(" %hhu", &num);
    printf("Number of 1 bits in %hhu: %d, %d\n", 
            num , count_ones_b(num), count_ones_a(num));
}
