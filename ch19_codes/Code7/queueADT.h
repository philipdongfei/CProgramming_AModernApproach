#ifndef  QUEUEADT_H
#define QUEUEADT_H

#include    <stdbool.h>

#define PUBLIC
#define PRIVATE static
#define QUEUE_SIZE 100

typedef int Item;
typedef struct queue_type *Queue;

Queue create(void);
void destroy(Queue q);
void enqueue(Queue q, Item n);
Item dequeue(Queue q);
Item getFirst(Queue q);
Item getLast(Queue q);
bool is_empty(Queue q);



#endif
