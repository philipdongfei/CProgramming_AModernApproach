#include    <stdio.h>
#include    <stdlib.h>
#include    "stack.h"

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
        //printf("\n");

    }
    return 0;

}

