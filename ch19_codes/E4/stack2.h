#ifndef STACK2_H
#define STACK2_H

#include    <stdbool.h>

#define PUBLIC
#define PRIVATE static

typedef int Item;

struct node {
    Item data;
    struct node *next;
};

typedef struct node *Stack;

void make_empty(Stack *s);
bool is_empty(const Stack *s);
bool is_full(const Stack *s);
void push(Stack *s, Item i);
Item pop(Stack *s);

#endif
