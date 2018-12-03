#include    <stdio.h>
#include    <stdarg.h>
#include    <stdlib.h>
#include    <ctype.h>
#include    <string.h>

char *vstrcat(const char *first, ...)
{
    va_list ap;
    int nLen = 0;
    char *pbuf = NULL, *pTemp;
    
    va_start(ap, first);
    nLen = strlen(first);
    while ((pTemp = va_arg(ap, char*)) != NULL) {
        nLen += strlen(pTemp);
    }
    pbuf = (char*)malloc(sizeof(char)*(nLen+1));
    memset(pbuf, 0x0, nLen+1);
    va_start(ap, first);
    nLen = strlen(first);
    strcpy(pbuf, first);
    while ((pTemp = va_arg(ap, char *)) != NULL) {
        nLen += strlen(pTemp);
        strcat(pbuf, pTemp);
    }
    va_end(ap);
    return pbuf;
}

int main(void)
{
    char *pbuf;

    pbuf = vstrcat("test", "vstrcat", "demo", (char*)NULL);
    printf("%s\n", pbuf);

    if (pbuf)
        free(pbuf);

    return 0;
}
