#include    <stdio.h>

int main(void)
{
    int i, j; 

    i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }
    printf("\n");

    i = 9384;
    do {
        printf("%d ", i);
        i /= 10;

    }while (i > 0);
    printf("\n");

    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);
    printf("\n");
    
    return 0;
}
