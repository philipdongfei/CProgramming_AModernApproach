#include    <stdio.h>
#include    <stdlib.h>
#include    "queue.h"

struct node {
    Item data;
    struct node *next;
};

PRIVATE struct node *first = NULL;
PRIVATE struct node *last = NULL;
PRIVATE int count;


PRIVATE void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void enqueue(Item n)
{
    /*
    if (count == QUEUE_SIZE)
        terminate("Error in enqueue: queue is full.");
    */
    struct node *temp = malloc(sizeof(struct node));
    temp->data = n;
    temp->next = NULL;
    if (is_empty()) {
        first = last = temp; 
    } else {
        last->next = temp;
        last = temp;
    }
    count++;

}
Item dequeue()
{
    if (is_empty())
        terminate("Error in dequeue: queue is empty.");
    Item n = first->data;
    struct node *old_first = first;
    first = first->next;
    free(old_first);
    count--;
    return n;
}
Item getFirst()
{
    if (is_empty())
        terminate("Error in dequeue: queue is empty.");
    return first->data;
}
Item getLast()
{
    if (is_empty())
        terminate("Error in dequeue: queue is empty.");
    return last->data;
}
bool is_empty()
{
    return count == 0;
}


