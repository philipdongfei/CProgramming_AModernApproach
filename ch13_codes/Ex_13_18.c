#include    <stdio.h>
#include    <string.h>

#define N 256
void remove_filename(char *url);

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 1;

    char url[N] = {0,};

    strncpy(url, argv[1], N);
    remove_filename(url);
    printf("url: %s\n", url);
    
    return 0;
}

void remove_filename(char *url)
{
    int len;
    len = strlen(url);

    char *p = url + len ;

    while (*(--p) != '/');
    *p = 0;
}
