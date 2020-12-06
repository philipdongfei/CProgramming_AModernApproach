#include    <stdio.h>


int main(void)
{

    int a[15] = {[14]=48, [9]=7, [2]=29};
    int b[] = {[5] = 10, [23] = 13, [11] = 36, [15] = 28};
    int c[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};

    for(int i = 0; i < 15; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
        printf("b[%d]=%d\n", i, b[i]);

    }
    for(int i = 0; i < 10; i++)
        printf("c[%d]=%d\n",i, c[i]);

#define SIZE ((int)(sizeof(a)/sizeof(a[0])))
    printf("a size = %d(%d/%d)\n", SIZE, sizeof(a), sizeof(a[0]));


    return 0;

}
