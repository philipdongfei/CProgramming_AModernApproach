#include    <stdio.h>
#include    <ctype.h>
#include    <stdlib.h>
#include    <string.h>


int main(int argc, char *argv[])
{
    if (argc != 2)
        exit(EXIT_FAILURE);
    int Len = strlen(argv[1]);

    for (int i=0; i < Len; i++)
    {
        if (argv[1][i] == '.')
            break;
        if (i == 0){
            if (isalpha(argv[1][i]) == 0 && argv[1][i] != '_')
            {
                fprintf(stderr,"file name illegal.%d:%c\n", i, argv[1][i]);
                break;
            }
        } else if (isalnum(argv[1][i]) == 0)
        {
            fprintf(stderr,"file name illegal.%d:%c\n", i, argv[1][i]);
            break;
        }
    }
    printf("file name legal:%s\n", argv[1]);
    return 0;
        
}
