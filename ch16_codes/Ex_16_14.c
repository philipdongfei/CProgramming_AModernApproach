#include    <stdbool.h>

#define RECTANGLE 0
#define CIRCLE 1

#define PI 3.141592

struct point {int x, y;};

struct shape{
    int shape_kind;     /* RECTANGLE or CIRCLE */
    struct point center;    /* coordinates of center */
    union {
        struct {
            int height, width;
        }rectangle;
        struct {
            int radius;
        } circle;
    }u;
}s;

double calc_area(struct shape a)
{
    if (a.shape_kind == RECTANGLE)
    {
        return a.u.rectangle.height * a.u.rectangle.width;
    } else if (a.shape_kind == CIRCLE)
    {
        return (PI * a.u.circle.radius * a.u.circle.radius);
    }
    else
        return 0.0;
}

struct shape move_shape(struct shape a, int x, int y)
{
    struct shape b;
    b = a;
    b.center.x += x;
    b.center.y += y;

    return b;
}

struct shape scale_shape(struct shape a, double c)
{
    struct shape b;
    b = a;
    if (a.shape_kind == RECTANGLE)
    {
        b.u.rectangle.height = (double)b.u.rectangle.height * c;
        b.u.rectangle.width = (double)b.u.rectangle.width * c;

    }else if (a.shape_kind == CIRCLE)
    {
        b.u.circle.radius = (double)b.u.circle.radius * c;
    }
    return b;
}

int main(void)
{
    struct shape a;
    a.shape_kind = RECTANGLE;
    a.center.x = 5;
    a.center.y = 5;
    a.u.rectangle.height = 8;
    a.u.rectangle.width = 8;

    return 0;
}

