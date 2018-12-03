#include    <stdio.h>
#include    <stdarg.h>
#include    <stdlib.h>

void display(int n, ...) 
{
    va_list ap;
    char *pStr = NULL;

    va_start(ap, n);

    for(int i = 1; i <= n; i++) 
    {
        pStr = va_arg(ap, char *);
        printf("%s ", pStr);
    }
    printf("\n");
    va_end(ap);

}

int main(void)
{
    display(4, "Special", "Agent", "Dale", "Cooper");

    return 0;
}
