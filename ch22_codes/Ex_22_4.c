#include    <stdio.h>

int main(void)
{
    float f = 83.7361;
    printf("%#012.5g\n", f);
    f = 29748.6607;
    printf("%#012.5g\n", f);
    f = 1054932234.0;
    printf("%#012.5g\n", f);
    f = 0.0000235218;
    printf("%#012.5g\n", f);

    return 0;
}
