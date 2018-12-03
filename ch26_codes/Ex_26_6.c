#include    <stdio.h>
#include    <stdarg.h>
#include    <stdlib.h>
#include    <ctype.h>
#include    <string.h>

char *max_pair(int num_pairs, ...);

int main(void) 
{
    printf("%s\n", max_pair(5, 180, "Seinfeld", 180, "I Love Lucky",
                            39, "The Honeymooners", 210, "All in the Family", 
                            86, "The Sopranos"));
    return 0;
}

char *max_pair(int num_pairs, ...)
{
    va_list ap;
    int i, current, largest;
    char *pStr = NULL, *pTemp = NULL;

    va_start(ap, num_pairs);
    largest = va_arg(ap, int);
    pStr = va_arg(ap, char *);

    for (i = 1; i < num_pairs; i++) {
        current = va_arg(ap, int);
        pTemp = va_arg(ap, char *);
        if (current > largest) {
            pStr = pTemp;
        }
    }
    va_end(ap);
    return pStr;
}
