#include    <stdio.h>
#include    <stdbool.h>


bool search(const int a[], int n, int key)
{
    int *p; 

    for (p = a; p < a + n; p++)
    {
        if (*p == key)
            return true;
    }
    return false;
}

int main(void)
{
    int a[5] = {1,2,3,4,5};
    int key = 5;

    if (search(a, 5, key))
        printf("find %d\n", key);
    else
        printf("no find %d\n", key);

    return 0;
}
