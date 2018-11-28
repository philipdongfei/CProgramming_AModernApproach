#include    <stdio.h>
#include    <ctype.h>
#include    <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;

    if (argc < 2) {
        fprintf(stderr, "usage: toupper file\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 1; i < argc; i++) {
        if ((fp = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "Can't open %s\n", argv[i]);
            exit(EXIT_FAILURE);
        }
        while ((ch = getc(fp)) != EOF)
            putchar(ch);
        fclose(fp);
    }
    return 0;
}
