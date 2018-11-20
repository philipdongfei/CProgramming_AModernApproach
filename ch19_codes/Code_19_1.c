#include    <stdbool.h>
#include    <stdio.h>
#include    <stdlib.h>
#include    "stack.h"


#define STACK_SIZE 100

#if 0
/* external variables */
char contents[STACK_SIZE];
int top = 0;
void stack_overflow();

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char ch)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = ch;

}

char pop(void)
{
    if (is_empty())
    {
        stack_overflow();
        return '\0';
    }   
    return contents[--top];
}

#endif
void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_SUCCESS);
}

int main(void)
{
    char chInput;
    bool bMatch = false;

    printf("Enter parenteses and/or braces: ");

    while ((chInput = getchar()) != '\n')
    {
        if (chInput == '(' || chInput == '{')
            push(chInput);
        if (chInput == ')' || chInput == '}')
        {
            char output = pop();
            //printf("input:%c, output:%c\n", chInput, output);
            if (output == '(' && chInput == ')')
                bMatch = true;
            else if (output == '{' && chInput == '}')
                bMatch = true;
            else
                bMatch = false;
            if (bMatch == false)
                stack_overflow();
        }
    }
    if (!is_empty())
    {
        printf("not is empty!\n");
        stack_overflow();

    }   

    printf("Parenteses/braces are nested properly\n");

    return 0;
}
