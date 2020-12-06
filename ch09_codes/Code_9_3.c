#include    <stdio.h>
#include    <stdlib.h>
#include    <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);


int main(void)
{
    char output[10][10];
    generate_random_walk(output);
    print_array(output);


    return 0;
}

void print_array(char walk[10][10])
{
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }

}


void generate_random_walk(char walk[10][10])
{
    int i = 0, j = 0, way, x = 0, y = 0, end = 1;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++)
            walk[i][j] = '.';
    }
    printf("init end\n");
    srand((unsigned) time(NULL));

    for (i = 0; i < 26; i++ )
    {
        if (i == 0)
        {
            walk[x][y] = 'A'+i;
            continue;
        }
        way = rand() % 4;
        end = 1;
        for (j = way; j < way + 4; j++ ){
            if (j%4 == 0){
                if ((x-1)<0)
                    continue;
                if (walk[x-1][y] != '.')
                    continue;
                x--;
                end = 0;
            }
            else if (j%4 == 1){
                if ((y-1) < 0)
                    continue;
                if (walk[x][y-1] != '.')
                    continue;
                y--;
                end = 0;
            } else if (j%4 == 2) {
                if ((x+1) > 25)
                    continue;
                if (walk[x+1][y] != '.')
                    continue;
                x++;
                end = 0;
            } else if (j%4 == 3) {
                if ((y+1) > 25)
                    continue;
                if (walk[x][y+1] != '.')
                    continue;
                y++;
                end = 0;
            }
        }
        if (end == 1)
            break;
        printf("x = %d, y=%d, i=%d:%c\n", x, y, i, 'A'+i);
        walk[x][y] = 'A'+i;
    }
}

