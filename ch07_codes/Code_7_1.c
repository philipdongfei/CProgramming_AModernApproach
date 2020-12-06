/* Prints a table of squares using a for statement. */

#include    <stdio.h>

int main(void)
{
    int i, n;
    short s;
    long l;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in tables: ");
    scanf("%d", &n);

#if 0
    for (i = 1; i <= n; i++)
        printf("%10d%10d\n", i, i * i);
#endif

#if 0
    for (s = 1; s <= n; s++)
        printf("%10hd%10hd\n", s, s * s);

#endif
#if 1
    for (l = 1; l <= n; l++)
        printf("%30ld%30ld\n", l, l * l);
#endif

    return 0;
}
