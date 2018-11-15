#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

void *my_malloc(size_t size)
{
    void *pMemory = malloc(size);
    if (pMemory == NULL){
        printf("Error: malloc failed in my_malloc.\n");
        exit(EXIT_FAILURE);
    }
    return pMemory;
}

int main(void)
{
    int alloc_size = 1;

    for (;;) {
        char *stuff = my_malloc(alloc_size);
        alloc_size *= 2;
        stuff = NULL;
    }

    return 0;
}
