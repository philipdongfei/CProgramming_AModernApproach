#include    <stdio.h>
#include    <stdlib.h>
#include    "queueADT.h"

PRIVATE Item contents[QUEUE_SIZE];
PRIVATE int count = 0, first = 0, last = 0;
struct queue_type {
    Item contents[QUEUE_SIZE];
    int first;
    int last;
    int count;
};

PRIVATE void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(void)
{
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL)
        terminate("Error in create: queue could not be created.");
    q->first = q->last = 0;
    return q;
}
void destroy(Queue q)
{
    free(q);
}

void enqueue(Queue q, Item n)
{
    if (count == QUEUE_SIZE)
        terminate("Error in enqueue: queue is full.");
    int last = q->last;
    q->contents[last++] = n;
    q->last = last % QUEUE_SIZE;
    q->count++;

}

Item dequeue(Queue q)
{
    if (is_empty(q))
        terminate("Error in dequeue: queue is empty.");
    int first = q->first;
    Item n = q->contents[first++];
    q->first = first % QUEUE_SIZE;
    q->count--;
    return n;
}
Item getFirst(Queue q)
{
    if (is_empty(q))
        terminate("Error in dequeue: queue is empty.");
    int first = q->first;
    return q->contents[first];

}
Item getLast(Queue q)
{
    if (is_empty(q))
        terminate("Error in dequeue: queue is empty.");
    int last = q->last;
    return q->contents[last-1];
}
bool is_empty(Queue q)
{
    return q->count == 0;

}

