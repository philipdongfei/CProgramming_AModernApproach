#ifndef STACK_H
#define STACK_H

#include    <stdbool.h>

#define PUBLIC   /* empty */
#define PRIVATE static

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

#endif

