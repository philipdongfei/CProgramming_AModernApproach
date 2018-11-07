#include    <stdio.h>
#include    <string.h>

void get_extension(const char *file_name, char *extension)
{
    char *p = file_name, ch;

    while ((ch = *p++) != '\0')
    {
        if (ch == '.')
            break;
    }

    if ((p - file_name) == strlen(file_name))
        extension = '\0';
    else
        strcpy(extension, p);
}

int main(int argc, char *argv[])
{
    char exten[8] = {0,};
    if (argc > 1)
    {
        get_extension(argv[1], exten);
        printf("%s: %s\n", argv[1], exten);

    }

    return 0;
}
