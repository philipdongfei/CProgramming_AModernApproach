#include    <stdio.h>
#include    <stdlib.h>

void print1()
{
    printf("That's all, ");
}

void print2()
{
    printf("folks!\n");
}

int main(void)
{
    printf("main begin: \n");
    atexit(print2);
    atexit(print1);

    return 0;
}
