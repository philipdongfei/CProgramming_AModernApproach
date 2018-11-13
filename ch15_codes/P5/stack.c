#include    <stdio.h>
#include    <stdlib.h>
#include    "stack.h"


#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;
void stack_overflow();

void make_empty(void)
{
    top = 0;
}

int is_empty(void)
{
    return top == 0;
}

int is_full(void)
{
    return top == STACK_SIZE;
}

void push(int ch)
{
    if (is_full())
    {
        printf("Expression is too complex\n");
        exit(0);
    }    
    else
        contents[top++] = ch;

}

int pop(void)
{
    if (is_empty())
    {
        printf("Expression is too complex\n");
        exit(0);
    }   
    return contents[--top];
}


