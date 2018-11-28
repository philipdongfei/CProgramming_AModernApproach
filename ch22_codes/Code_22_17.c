#include    <stdio.h>
#include    <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        exit(EXIT_FAILURE);
    }
    int area, telfirst, telsecond;
    FILE *fp;
    char str[256] = {0,};
    if ((fp = fopen(argv[1],"rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while (fgets(str,sizeof(str), fp) != NULL) {
        if (sscanf(str, "%03d.%03d.%04d", &area,&telfirst,&telsecond) == 3)
        {
            printf("(%03d) %03d-%04d\n", area, telfirst, telsecond);
                
        }else if (sscanf(str, "(%03d) %03d-%04d", &area,&telfirst,&telsecond) == 3){
            printf("(%03d) %03d-%04d\n", area, telfirst, telsecond);
        }else if (sscanf(str, "%03d-%03d-%04d", &area,&telfirst,&telsecond) == 3){
            printf("(%03d) %03d-%04d\n", area, telfirst, telsecond);
        }else if (sscanf(str, "%03d %03d %04d", &area,&telfirst,&telsecond) == 3){
            printf("(%03d) %03d-%04d\n", area, telfirst, telsecond);
        }else if (sscanf(str,"%03d%03d%04d",&area,&telfirst,&telsecond ) == 3){
            printf("(%03d) %03d-%04d\n", area, telfirst, telsecond);
        }
    }
    fclose(fp);
    return 0;
}
