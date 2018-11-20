#include    <stdio.h>
#include    <stdlib.h>
#include    "queue.h"

PRIVATE Item contents[QUEUE_SIZE];
PRIVATE int count = 0, first = 0, last = 0;

PRIVATE void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void enqueue(Item n)
{
    if (count == QUEUE_SIZE)
        terminate("Error in enqueue: queue is full.");
    contents[last++] = n;
    last = last % QUEUE_SIZE;
    count++;

}

Item dequeue()
{
    if (is_empty())
        terminate("Error in dequeue: queue is empty.");
    Item n = contents[first++];
    first = first % QUEUE_SIZE;
    count--;
    return n;
}
Item getFirst()
{
    if (is_empty())
        terminate("Error in dequeue: queue is empty.");
    return contents[first];

}
Item getLast()
{
    if (is_empty())
        terminate("Error in dequeue: queue is empty.");
    return contents[last-1];
}
bool is_empty()
{
    return count == 0;

}

