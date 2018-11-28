/* Performs XOR encryption */

#include    <ctype.h>
#include    <stdio.h>
#include    <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[])
{
    if (argc != 3)
        exit(EXIT_FAILURE);

    FILE *orig_file, *new_file;
    int orig_char, new_char;
    if ((orig_file = fopen(argv[1],"rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((new_file = fopen(argv[2], "wb")) == NULL){
        fprintf(stderr, "Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((orig_char = fgetc(orig_file)) != EOF) {
            new_char = orig_char ^ KEY;
            if (fputc(new_char, new_file) == EOF) {
                fprintf(stderr, "fputc error\n");
                break;
            }
    }
    fclose(orig_file);
    fclose(new_file);
    return 0;
}
