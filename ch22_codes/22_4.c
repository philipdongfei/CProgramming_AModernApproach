#include    <stdio.h>
#include    <string.h>
#include    <stdlib.h>
#include    <ctype.h>

int main(void)
{
    FILE *fp;
    fp = fopen("foo.dat","r");
    int ch;
    while (isdigit(ch = getc(fp))) {
        printf("%c", ch);
    }
    ungetc(ch, fp);
    printf("\nprev: %c", ch);
    fclose(fp);

    return 0;
}
