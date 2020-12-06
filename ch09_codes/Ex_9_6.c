#include    <stdio.h>

int num_digits(int n);
int digit(int n, int k);


int main(void)
{
    int n, k;

    printf("Enter two number: ");
    scanf("%d%d", &n, &k);

    printf("k = %d\n", digit(n, k));

    return 0;
        
}

int digit(int n, int k)
{
    int value = n, num = 0;
    if (num_digits(n) < k)
        return 0;
    for (int i=0; i<k; i++)
    {
        
        num = value % 10;
        value /= 10;
    }    

    return num;
}


int num_digits(int n)
{
    int num = 1;

    while ((n = n / 10 ) != 0)
        ++num;

    return num;
}

