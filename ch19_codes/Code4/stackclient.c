#include    <stdio.h>
#include    <stdlib.h>
#include    "stackADT.h"

int main(void)
{
    Stack s1, s2;
    int n, *pData;

    s1 = create();
    s2 = create();

    pData = malloc(sizeof(int));
    *pData = 1;
    push(s1,pData);
    pData = malloc(sizeof(int));
    *pData = 2;
    push(s1,pData);

    pData = pop(s1);
    printf("Popped %d from s1\n", *pData);
    push(s2, pData);
    pData = pop(s1);
    printf("Popped %d from s1\n", *pData);
    push(s2, pData);

    destroy(s1);

    while (!is_empty(s2))
    {
        pData = pop(s2);
        printf("Popped %d from s2\n", *pData);
        free(pData);
    }

    pData = malloc(sizeof(int));
    *pData = 3;
    push(s2, pData);
    make_empty(s2);
    if (is_empty(s2))
        printf("s2 is empty\n");
    else
        printf("s2 is not empty\n");
    destroy(s2);

    return 0;
}
