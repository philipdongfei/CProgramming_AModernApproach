#include    <stdio.h>

int main(void)
{
    int i, dig;

    printf("Enter a number: ");
    scanf("%d", &i);

    if (i > 0 && i < 9)
        dig = 1;
    else if ( i >= 10 && i <= 99 )
        dig = 2;
    else if ( i >= 100 && i <= 999 )
        dig = 3;

    printf("The number %d has %d digits\n", i,dig);

    return 0;
}
