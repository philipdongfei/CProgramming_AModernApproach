#include    <stdio.h>
#include    <stdlib.h>

#define FILE_NAME "example.dat"

int main(void)
{
    FILE *fp;

    fp = fopen(FILE_NAME, "r");
    if (fp == NULL) {
        printf("Can't open %s\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }
    fclose(fp);
    if(freopen(FILE_NAME,"w", stdout) == NULL){
        printf("Can't freopen %s\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }
    printf("This sentence is redirected to a file.");
    fclose(stdout);

    return 0;
}
