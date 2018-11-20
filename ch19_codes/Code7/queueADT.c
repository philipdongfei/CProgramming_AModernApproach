#include    <stdio.h>
#include    <stdlib.h>
#include    "queueADT.h"

struct node {
    Item data;
    struct node *next;
};

struct queue_type{
    int count;
    struct node *first;
    struct node *last;
};

PRIVATE struct node *first = NULL;
PRIVATE struct node *last = NULL;
PRIVATE int count;


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
    q->first = q->last = NULL;
    q->count = 0;
    return q;

}
void destroy(Queue q)
{
    while (!is_empty(q))
        dequeue(q);
    free(q);
}

void enqueue(Queue q, Item n)
{
    /*
    if (count == QUEUE_SIZE)
        terminate("Error in enqueue: queue is full.");
    */
    struct node *temp = malloc(sizeof(struct node));
    temp->data = n;
    temp->next = NULL;
    if (is_empty(q)) {
        q->first = q->last = temp; 
    } else {
        q->last->next = temp;
        q->last = temp;
    }
    q->count++;

}
Item dequeue(Queue q)
{
    if (is_empty(q))
        terminate("Error in dequeue: queue is empty.");
    Item n = q->first->data;
    struct node *old_first = q->first;
    q->first = q->first->next;
    free(old_first);
    q->count--;
    return n;
}
Item getFirst(Queue q)
{
    if (is_empty(q))
        terminate("Error in dequeue: queue is empty.");
    return q->first->data;
}
Item getLast(Queue q)
{
    if (is_empty(q))
        terminate("Error in dequeue: queue is empty.");
    return q->last->data;
}
bool is_empty(Queue q)
{
    return q->count == 0;
}


