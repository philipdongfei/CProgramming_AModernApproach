#ifndef  QUEUE_H
#define QUEUE_H

#include    <stdbool.h>

#define PUBLIC
#define PRIVATE static
#define QUEUE_SIZE 100
typedef int Item;

typedef struct {
    Item contents[QUEUE_SIZE];
    int first;
    int last;
}Queue;


void enqueue(Queue *q, Item n);
Item dequeue(Queue *q);
Item getFirst(const Queue *q);
Item getLast(const Queue *q);
bool is_empty(const Queue *q);

#endif
