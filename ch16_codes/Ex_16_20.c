#include    <stdio.h>

enum {NORTH, SOUTH, EAST, WEST} direction;

int main(void)
{
    int x = 0, y = 0;
    scanf("%d", &direction);

    switch(direction){
        case NORTH:
            y -= 1;
            break;
        case SOUTH:
            y += 1;
            break;
        case WEST:
            x -= 1;
            break;
        case EAST:
            x += 1;
            break;
        default:
            break;
    }

    return 0;
}
