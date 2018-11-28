#include    <stdio.h>
#include    <stdlib.h>


int main(void)
{
    

    char filename[80] = {0,}, outfile[80] = {0,} ;
    int Input, n;
    FILE *fp,*out_fp;


    printf("Enter name of file to be encrypted: ");
    scanf(" %s", filename);
    sprintf(outfile,"%s.enc", filename);
    if ((fp = fopen(filename, "rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }
    if ((out_fp = fopen(outfile, "wb")) == NULL) {
        fprintf(stderr, "Can't open %s.enc\n", filename);
        exit(EXIT_FAILURE);
    } 
    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);
    while ((Input = fgetc(fp)) != EOF) 
    {
        int ch = Input; 
        if (ch >= 'a' && ch <= 'z')
            ch = ((ch - 'a') + n) % 26 + 'a';
        else if (ch >= 'A' && ch <= 'Z')
            ch = ((ch - 'A') + n) % 26 + 'A';
        else
            ch = ch;
        fputc(ch, out_fp);
    }

    fclose(fp);
    fclose(out_fp);
    return 0;
    
}
