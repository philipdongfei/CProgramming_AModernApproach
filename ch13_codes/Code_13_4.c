#include    <stdio.h>
#include    <string.h>
#include    <stdbool.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 1;

    for (int i = argc - 1; i > 0; i--)
        printf("%s ", argv[i]);
    printf("\n");

    return 0;

}
