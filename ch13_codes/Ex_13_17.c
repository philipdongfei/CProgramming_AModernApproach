#include    <stdio.h>
#include    <stdbool.h>
#include    <ctype.h>
#include    <string.h>


bool test_extension(const char *file_name, 
                    const char *extension);

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 1;
    if (test_extension(argv[1], argv[2]))
        printf("%s: %s true\n", argv[1], argv[2]);
    else
        printf("%s: %s false\n", argv[1], argv[2]);


    return 0;
}

bool test_extension(const char *file_name, 
                    const char *extension)
{
    char ch, *p, *q;

    p = file_name;
    q = extension;
    while ((ch = *p++) != '\0') {
        if (ch == '.')
            break;
    }
    if ((p - file_name) == strlen(file_name))
        return false;
    //if (strcmp(p, extension) == 0)
    //    return true;
    while( toupper(*p) == toupper(*q)) {
        if (*p == '\0')
            return true;
        p++;
        q++;
        
    }
    
    return false;
}


