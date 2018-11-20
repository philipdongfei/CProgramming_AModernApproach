#ifndef  QUEUE_H
#define QUEUE_H

#include    <stdbool.h>

#define PUBLIC
#define PRIVATE static
#define QUEUE_SIZE 100

typedef int Item;

void enqueue(Item n);
Item dequeue();
Item getFirst();
Item getLast();
bool is_empty();



#endif
