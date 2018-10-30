#include    <stdio.h>

int evaluate_position(char board[8][8]);


int main(void)
{

    return 0;
}

int evaluate_position(char board[8][8])
{
    int whitepoints, blackpoints;
    whitepoints = 0, blackpoints = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i][j] == 'Q')
                whitepoints += 9;
            else if (board[i][j] == 'R')
                whitepoints += 5;
            else if (board[i][j] == 'B' || board[i][j] == 'N')
                whitepoints += 3;
            else if (board[i][j] == 'P')
                whitepoints += 1;

            if (board[i][j] == 'q')
                blackpoints += 9;
            else if (board[i][j] == 'r')
                blackpoints += 5;
            else if (board[i][j] == 'b' || board[i][j] == 'n')
                blackpoints += 3;
            else if (board[i][j] == 'p')
                blackpoints += 1;
        }
    }
    return whitepoints - blackpoints;
}
