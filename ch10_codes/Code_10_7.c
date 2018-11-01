#include    <stdio.h>
#include    <stdlib.h>
#include    <stdbool.h>
#include    <ctype.h>

#define MAX_DIGITS  10

int segments[10][7] ={{1,1,1,1,1,1},
                      {0,1,1},
                      {1,1,0,1,1,0,1},
                      {1,1,1,1,0,0,1},
                      {0,1,1,0,0,1,1},
                      {1,0,1,1,0,1,1},
                      {1,0,1,1,1,1,1},
                      {1,1,1},
                      {1,1,1,1,1,1,1},
                      {1,1,1,1,0,1,1}};

char digits[3][MAX_DIGITS*4];   //number:3x3

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    char ch;
    int pos = 0;
    printf("Enter a number: ");

    while(1)
    {
        scanf("%c", &ch);
        if (pos >= 10)
            break;
        if (ch == '\n')
            break;
        else if (ch >= '0' && ch <= '9')
        {
            int digit = ch - '0';
            process_digit(digit, pos);
            pos++;

        }
    }
    print_digits_array();
    return 0;
}

void clear_digits_array(void)
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < MAX_DIGITS*4; j++) {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position)
{
    int move = position * 4;
    for (int i=0; i<7; i++)
    {
        if (segments[digit][i] == 1){
            switch(i){
            case 0:
                digits[0][move+1] = '_';
                break;
            case 1:
                digits[1][move+2] = '|';
                break;
            case 2:
                digits[2][move+2] = '|';
                break;
            case 3:
                digits[2][move+1] = '_';
                break;
            case 4:
                digits[2][move+0] = '|';
                break;
            case 5:
                digits[1][move+0] = '|';
                break;
            case 6:
                digits[1][move+1] = '_';
                break;
            default:
                break;
            }

        }
    }
}

void print_digits_array(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < MAX_DIGITS*4; j++)
        {
            printf("%c", digits[i][j]);

        }
        printf("\n");
    }
}
