#include    <stdbool.h>
#include    <stdio.h>
#include    <stdlib.h>
#include    "stackADT.h"


#define STACK_SIZE 100

#if 0
/* external variables */
int contents[STACK_SIZE];
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
#endif


int main(void)
{
    char ch;
    int x, y = 0;

    Stack s = create();
    printf("Enter an RPN expression: ");
    while(1)
    {
        scanf(" %c", &ch);
        if (ch == 'q')
            break;
        else if (ch >= '0' && ch <= '9')
        {
            int n = ch - '0';
            push(s,n);

        } else if (ch == '=')
        {
            printf("Value of expression: %d\n", pop(s));
            if (!is_empty(s))
            {
                printf("Not enough operands in expression.\n");
                destroy(s);
                exit(0);

            }
            printf("Enter an RPN expression: ");
        }
        else {
            switch(ch) {
                case '+':
                case '-':
                case '*':
                case '/':
                    x = pop(s);
                    if (ch == '+')
                        y = pop(s) + x;
                    else if (ch == '-')
                        y = pop(s) - x;
                    else if (ch == '*')
                        y = pop(s) * x;
                    else if (ch == '/')
                        y = pop(s) / x;
                    push(s,y);
                    break;
                default:
                    destroy(s);
                    exit(0);
            }
        }

    }
    destroy(s);
    return 0;

}

