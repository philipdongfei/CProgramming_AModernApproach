#include    <stdio.h>
#include    <stdlib.h>
#include    "queueADT.h"

int main(void)
{
    Queue q1, q2;
    int n;
    q1 = create();
    q2 = create();

    enqueue(q1,2);
    enqueue(q1,4);
    enqueue(q1,6);
    printf("enqueueed 2, 4, and 6 onto q1\n");
    enqueue(q2,1);
    enqueue(q2,3);
    enqueue(q2,5);
    printf("enqueue 1,3,and 5 onto q2\n");

    printf("first q1: %d\n", getFirst(q1));

    printf("dequeue q1: %d\n", dequeue(q1));
    printf("dequeue q2: %d\n", dequeue(q2));

    n = dequeue(q1);
    printf("dequeue %d from q1 and enqueue to q2\n", n);
    enqueue(q2,n);

    printf("dequeue %d from q2\n", dequeue(q2));
    printf("top of q2 is %d\n", getFirst(q2));
    printf("bottom of q2 is %d\n", getLast(q2));
    printf("dequeue %d from q2\n", dequeue(q2));
    printf("dequeue %d from q2\n", dequeue(q2));
    printf("dequeue q1: %d\n", dequeue(q1));
    destroy(q1);
    destroy(q2);

    return 0;
}
