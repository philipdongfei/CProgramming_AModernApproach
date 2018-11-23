#include     <stdio.h>

union {
    float f;
    struct IEEE_float {
        unsigned int fraction: 23;
        unsigned int exponent: 8;
        unsigned int sign: 1;
    }ff;
}MyFloat;

int main(void)
{
    MyFloat.ff.sign = 1;
    MyFloat.ff.fraction = 0;
    MyFloat.ff.exponent = 128;

    printf("%f\n", MyFloat.f);

    return 0;
}


