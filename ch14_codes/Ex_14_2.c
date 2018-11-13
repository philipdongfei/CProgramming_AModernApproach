#include    <stdio.h>

#define NELEMS(a) ((int)(sizeof(a)/sizeof(a[0]))) 
    


int main(void)
{
    int a[100] = {0,};
    for (int i = 0; i < 73; i++)
        a[i] = i;
    printf("a size: %d\n", NELEMS(a));

    return 0;
}
