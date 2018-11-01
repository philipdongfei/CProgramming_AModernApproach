#include    <stdbool.h>
#include    <stdio.h>
#include    <stdlib.h>


#define STACK_SIZE 100

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


int main(void)
{
    char ch;
    int x, y = 0;

    printf("Enter an RPN expression: ");
    while(1)
    {
        scanf(" %c", &ch);
        if (ch == 'q')
            break;
        else if (ch >= '0' && ch <= '9')
        {
            int n = ch - '0';
            push(n);

        } else if (ch == '=')
        {
            printf("Value of expression: %d\n", pop());
            if (!is_empty())
            {
                printf("Not enough operands in expression.\n");
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
                    x = pop();
                    if (ch == '+')
                        y = pop() + x;
                    else if (ch == '-')
                        y = pop() - x;
                    else if (ch == '*')
                        y = pop() * x;
                    else if (ch == '/')
                        y = pop() / x;
                    push(y);
                    break;
                default:
                    exit(0);
            }
        }

    }
    return 0;

}

