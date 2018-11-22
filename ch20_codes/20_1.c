#include    <stdio.h>

int main(void)
{
    unsigned short i, j, k;

    i = 13;     /* i is now 13 (binary 0000000000001101) */
    printf("i = %d\n", i);
    j = i << 2; /* j is now 52 (binary 0000000000110100) */
    printf("i << 2: %d\n", j);
    j = i >> 2; /* j is now 3  (binary 0000000000000011) */
    printf("i >> 2: %d\n", j);
    i =21;      /* i is now 21      (binary 0000000000010101) */
    printf("i = %d\n", i);
    j = 56;     /* j is now 56      (binary 0000000000111000) */
    printf("j = %d\n", j);
    k = ~i;     /* k is now 65514   (binary 1111111111101010) */
    printf("~i = %d\n", k);
    k = i & j;  /* k is now 16      (binary 0000000000010000) */
    printf("i&j = %d\n", k);
    k = i ^ j;  /* k is now 45      (binary 0000000000101101) */
    printf("i^j = %d\n", k);
    k = i | j;  /* k is now 61      (binary 0000000000111101) */
    printf("i|j = %d\n", k);
    i = 0x0000;
    j = 4;
    i |= i << j;  /* sets bit j */
    i = 0x00ff;
    printf("j = %d\n", j);
    i &= ~(1 << j); /* clears bit j */
    printf("j = %d\n", j);
    if (i  & 1 << j) /* tests bit j */
        printf("tests bit %d is 1\n", j);
    else
        printf("tests bit %d is 0\n", j);
    i = (i & ~0x0070) | (j << 4);  /* stores j in bits 4-6) */
    printf("i = %d\n", i);
    j = i & 0x0007;
    printf("j = %d\n", j);
    j = (i >> 4) & 0x0007; /* retrieves bits 4-6 */
    printf("j = %d\n", j);

    return 0;
}
