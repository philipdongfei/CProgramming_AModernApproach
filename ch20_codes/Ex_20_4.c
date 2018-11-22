#include    <stdio.h>


#define MK_COLOR(r,g,b) ((long)(b)<<16 | (g)<<8 | (r))
#define GET_RED(c)      ((int)(c) & 0x00ff)
#define GET_GREEN(c)    ((int)(c)>>8 & 0x00ff)
#define GET_BLUE(c)     ((int)(c)>>16)

int main(void)
{
    int r, g, b;
    r = 100;
    g = 200;
    b = 145;
    printf("r=%d,g=%d,b=%d\n", r, g, b);
    long color = MK_COLOR(r,g,b);
    printf("color: %ld\n", color);
    printf("r=%d,g=%d,b=%d\n", r, g, b);
    r = g = b = 0;
    r = GET_RED(color);
    g = GET_GREEN(color);
    b = GET_BLUE(color);
    printf("r=%d,g=%d,b=%d\n", r, g, b);

    return 0;
}


