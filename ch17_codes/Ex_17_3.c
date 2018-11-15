#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

#define Init_N 3

int *create_array(int n, int initial_value);


int main(void)
{
    int *pInt = create_array(20, Init_N);
    for (int i = 0; i < 20; i++){
        if (pInt[i] != Init_N)
        {
            printf("initial error\n");
            return 1;
        }
    }
    printf("success\n");
    return 0;
}

int *create_array(int n, int initial_value)
{
    int *p = malloc(n*sizeof(int)+1);
    if (p == NULL)
    {
        return NULL;
    }
    for (int i = 0; i < n; i++)
        p[i] = initial_value;
    return p;
}
