#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

char *duplicate(const char *s)
{
    char *temp = malloc(strlen(s) + 1);

    if (temp == NULL)
        return NULL;
    strcpy(temp, s);
    return temp;
}

int main(void)
{
    char msg[] = "test duplicate!";
    char *p = duplicate(msg);

    printf("%s\n",p );
    free(p);
    p = NULL;

    return 0;
}
