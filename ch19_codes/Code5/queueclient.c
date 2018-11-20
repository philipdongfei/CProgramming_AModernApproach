#include    <stdio.h>
#include    <stdlib.h>
#include    "queueADT.h"

int main(void)
{
    Queue q;
    int n;

    q = create();
    n = 1;
    enqueue(q, n);
    n = 2;
    enqueue(q, n);
    printf("dequeue:%d\n", dequeue(q));
    printf("dequeue:%d\n", dequeue(q));
    destroy(q);


    return 0;
}
