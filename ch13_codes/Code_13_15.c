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

int evaluate_RPN_expression(const char *expression);

int main(void)
{
    char ch, expression[256] = {0}, *pExpre;
    pExpre = expression;

    printf("Enter an RPN expression: ");
    while(1)
    {
        scanf(" %c", &ch);
        
        if (ch == 'q')
            break;
        if (ch == '='){
            *pExpre++ = ch;
            printf("Value of expression: %d\n",evaluate_RPN_expression(expression));
            pExpre = expression;
            printf("Enter an RPN expression: ");

        }
        else
            *pExpre++ = ch;
#if 0
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
#endif
    }
    return 0;

}

int evaluate_RPN_expression(const char *expression)
{
    int x, y = 0;
    char ch;
    
    while((ch = *expression++) != '\0')
    {
        if (ch >= '0' && ch <= '9')
        {
            int n = ch - '0';
            push(n);

        } else if (ch == '=')
        {
            //printf("Value of expression: %d\n", pop());
            return pop();
            if (!is_empty())
            {
                printf("Not enough operands in expression.\n");
                exit(0);

            }
            //printf("Enter an RPN expression: ");
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
    return pop();
}

