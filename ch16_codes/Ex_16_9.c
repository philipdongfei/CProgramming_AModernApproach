#include    <stdbool.h>

struct color {
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue)
{
    struct color c;
    if (red < 0) c.red = 0;
    else if (red > 255) c.red = 255;
    else c.red = red;
    if (green < 0) c.green = 0;
    else if (green > 255) c.green = 255;
    else c.green = green;
    if (blue < 0) c.blue = 0;
    else if (blue > 255) c.blue = 255;
    else c.blue = blue;

    return c;
}

int getRed(struct color c)
{
    return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
    if (color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue)
        return true;
    else
        return false;
}

struct color brighter(struct color c)
{
    struct color b = {3,3,3};
    if (c.red == 0 && c.green == 0 && c.blue == 0)
    {
        return b;
    } else if ( (c.red > 0&&c.red < 3) || (c.green > 0&&c.green < 3)|| (c.blue > 0 && c.blue < 3))
    {
        if (c.red < 3)
            b.red = 3;
        else
            b.red = c.red;
        if (c.green < 3)
            b.green = 3;
        else
            b.green = c.green;
        if (c.blue < 3)
            b.blue = c.blue;
        else
            b.blue = c.blue;
    }
    else
        b = c;
    b.red = (double)b.red/0.7;
    b.green = (double)b.green/0.7;
    b.blue = (double)b.blue/0.7;
    if (b.red > 255)
        b.red = 255;
    if (b.green > 255)
        b.green = 255;
    if (b.blue > 255)
        b.blue = 255;
    return b;
}

struct color darker(struct color c)
{
    struct color b = {3,3,3};
    if (c.red == 0 && c.green == 0 && c.blue == 0)
    {
        return b;
    } else if ( (c.red > 0&&c.red < 3) || (c.green > 0&&c.green < 3)|| (c.blue > 0 && c.blue < 3))
    {
        if (c.red < 3)
            b.red = 3;
        else
            b.red = c.red;
        if (c.green < 3)
            b.green = 3;
        else
            b.green = c.green;
        if (c.blue < 3)
            b.blue = c.blue;
        else
            b.blue = c.blue;
    }
    else
        b = c;
    b.red = (double)b.red*0.7;
    b.green = (double)b.green*0.7;
    b.blue = (double)b.blue*0.7;
    if (b.red > 255)
        b.red = 255;
    if (b.green > 255)
        b.green = 255;
    if (b.blue > 255)
        b.blue = 255;

    return b;
}

int main(void)
{
    struct color c1 = {233, 22, 30}, c2 = {20, 234, 100};
    equal_color(c1, c2);

    return 0;
}
