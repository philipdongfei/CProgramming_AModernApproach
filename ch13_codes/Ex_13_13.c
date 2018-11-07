#include    <stdio.h>
#include    <string.h>


void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}

int main(int argc, char *argv[])
{
    char url[256] = {0,};

    build_index_url(argv[1], url);

    printf("%s\n", url);

    return 0;
}
