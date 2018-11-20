#ifndef STACK1_H
#define STACK1_H

#include    <stdbool.h>

#define PUBLIC
#define PRIVATE static 
#define STACK_SIZE 100

typedef int Item; 
typedef struct {
    Item contents[STACK_SIZE];
    int top;
}Stack;

void make_empty(Stack *s);
bool is_empty(const Stack *s);
bool is_full(const Stack *s);
void push(Stack *s, Item n);
Item pop(Stack *s);

#endif


