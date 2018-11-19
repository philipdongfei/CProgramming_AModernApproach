#ifndef  QUEUE_H
#define QUEUE_H

#include    <stdbool.h>

typedef int Item;

void enqueue(Item n);
Item dequeue();
Item first();
Item last();
bool is_empty();

#endif
