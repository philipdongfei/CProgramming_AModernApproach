#include    <stdio.h>

int main(void)
{
    int i;
#if 0
    for (i = 10; i>= 1; i /= 2)
        printf("%d ", i++);
    printf("\n");
#endif

#if 1
    i = 10;
    while (i >= 1) {
        printf("%d ", i++);
        i /= 2;
    }
#endif

    return 0;
}
