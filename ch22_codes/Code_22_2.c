#include    <stdio.h>
#include    <ctype.h>
#include    <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;

    if (argc != 2) {
        fprintf(stderr, "usage: toupper file\n");
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
        putchar(toupper(ch));
    fclose(fp);
    return 0;
}
