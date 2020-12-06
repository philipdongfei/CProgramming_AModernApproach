#include    <stdio.h>
#include    <stdbool.h>
#include    <stdlib.h>
#include    <time.h>

#define NUM_DICE 6

int roll_dice(void);
bool play_game(void);


int main(void)
{
    char ch;

    while(1)
    {
        if (play_game())
            printf("You win!\n");
        else
            printf("You lose!\n");
        
        printf("Play again? ");
        scanf(" %c", &ch);
        if (ch == 'y')
            continue;
        else if (ch == 'n') 
            break;


#if 0
        printf("Play again? ");
        ch = getchar();
        printf("%c", ch);
        if (ch == 'n')
        {
            break;
        }
        else if (ch == 'y')
            continue;
#endif

    }

    return 0;
}

int roll_dice(void)
{
    int a, b;
    srand((unsigned) time(NULL));

    a = rand() % NUM_DICE;
    b = rand() % NUM_DICE;

    return a+b;
}

bool play_game(void)
{
    printf("play_name\n");
    int num, last_num = 0, flag = 22;

    while (1)
    {
        num = roll_dice();
        printf("You rolled: %d\n", num);
        switch(num)
        {
        case 7: case 11:
            if (num == 7 && last_num > 0)
            {
                flag = 0;
            }
            else if (num == 11 && last_num > 0)
                break;
            else{
                flag = 1;
            }
            break;
            
        case 2: case 3: case 12:
            if (last_num > 0)
                break;
            flag = 0;
        default:
            if (last_num > 0)
            {
                flag = 1;
                break;
            }
            last_num = num; 
            break;
        }
        if (flag == 0)
            return false;
        else if (flag == 1) 
            return true;
    }
}
