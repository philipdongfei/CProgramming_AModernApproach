#include    <stdio.h>

int line_length(const char *filename, int n);

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 1;
    printf("argv[1]: %s\n", argv[1]); 
    int n = 2;
    printf("%d line: length = %d\n",n, line_length(argv[1], n));

    return 0;
}

int line_length(const char *filename, int n)
{
    FILE *fp;
    int line = 1, length = 0,i;
    char strLine[256] = {0};
    if ((fp = fopen(filename, "r")) != NULL) {
        while(fgets(strLine, sizeof(strLine), fp) != NULL)
        {
            printf("%s\n", strLine);
            if (line == n){
                break;
            }
            line++;
        }
        for (i=0; strLine[i] != '\n'; i++);
        printf("i=%d\n", i);
        length = i;
    }
    return length;
}
