#include    <stdio.h>
#include    <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "usage: error\n");
        exit(EXIT_FAILURE);
    }
    FILE *fp;
    char str[256] = {0,};
    int item, month, day, year;
    float price;
    if ((fp = fopen(argv[1], "rb")) == NULL) {
        fprintf(stderr,"Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    printf("Item         Unit        Purchase\n");
    printf("             Price       Date\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        if (sscanf(str, "%d,%f,%d/%d/%04d",&item,&price,&month,&day,&year) != 5)
        {
            fprintf(stderr,"str form error\n");
            exit(EXIT_FAILURE);
        }
        printf("%-d        $ %- .2f      %-d/%d/%04d\n",item, price, month, day, year);

    }
    fclose(fp);

    return 0;

}
