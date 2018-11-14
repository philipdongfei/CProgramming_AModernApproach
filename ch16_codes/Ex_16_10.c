#include    <stdbool.h>
#include    <stdio.h>

struct point {int x, y;};
struct rectangle {struct point upper_left, lower_right;};

int calc_area(struct rectangle r)
{
    return (r.lower_right.x-r.upper_left.x)*(r.upper_left.y-r.lower_right.y);
}

struct point calc_center(struct rectangle r)
{
    struct point center;
    center.x = r.upper_left.x + (r.lower_right.x-r.upper_left.x)/2;
    center.y = r.lower_right.y + (r.upper_left.y-r.lower_right.y)/2;

    return center;
}

struct rectangle move_rectangle(struct rectangle r, int x, int y)
{
    struct rectangle move;
    move.upper_left.x = r.upper_left.x + x;
    move.upper_left.y = r.upper_left.y + y;
    move.lower_right.x = r.lower_right.x + x;
    move.lower_right.y = r.lower_right.y + y;

    return move;
}

bool isInner(struct rectangle r, struct point p)
{
    if ((p.x >= r.upper_left.x && p.x <= r.lower_right.x) && (p.y >= r.lower_right.y && p.y <= r.upper_left.y))
        return true;
    else
        return false;
}

int main(void)
{
    struct rectangle r = {(struct point){1, 10}, (struct point){10, 1}};
    printf("area:%d\n",calc_area(r));
    calc_center(r);

    printf("(5,5) in r: %d\n", isInner(r, (struct point){5,5}));
    return 0;
}
