#include    <stdio.h>

int main(void)
{
    char msg[] = {"\xfc""ber"};
    printf("%s\n", msg);

    printf("%c", '\n');
    printf("%c", "\n");
    printf("%s", '\n');
    printf("%s", "\n");
    printf('\n');
    printf("\n");
#if 0
    putchar('\n');
    putchar("\n");
    puts('\n');
    puts("\n");
    puts("");
#endif

    return 0;
}
