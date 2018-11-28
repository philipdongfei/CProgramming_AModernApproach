#include    <stdio.h>

int main(void)
{
    int a = 123, b = -123, len = 4, n = 0, i = 0, j = 0, k = 0;
    float c = 123.0;
    char s1[] = {"bogus"};
    char s2[] = {"buzzword"};
    char str[32] = {0,};
    printf("%%8d:%8d %8d\n", a, b);
    printf("%%-8d:%-8d %-8d\n", a, b);
    printf("%%+8d:%+8d %+8d\n", a, b);
    printf("%% 8d:% 8d % 8d\n", a, b);
    printf("%%08d:%08d %08d\n", a, b);
    printf("%%-+8d:%-+8d %-+8d\n", a, b);
    printf("%%- 8d:%- 8d %- 8d\n", a, b);
    printf("%%+08d:%+08d %+08d\n", a, b);
    printf("%% 08d:% 08d % 08d\n", a, b);

    printf("%%8o: %8o\n", a);
    printf("%%#8o: %#8o\n", a);
    printf("%%8x: %8x\n", a);
    printf("%%#8x: %#8x\n", a);
    printf("%%8X: %8X\n", a);
    printf("%%#8X: %#8X\n", a);
    printf("%%8g: %8g\n", c);
    printf("%%#8g: %#8g\n", c);
    printf("%%8G: %8G\n", c);
    printf("%%#8G: %#8G\n", c);

    printf("%%6s: %6s %6s\n", s1, s2);
    printf("%%-6s: %-6s %-6s\n", s1, s2);
    printf("%%.4s: %.4s %.4s\n", s1, s2);
    printf("%%6.4s: %6.4s %6.4s\n", s1, s2);
    printf("%%-6.4s: %-6.4s %-6.4s\n", s1, s2);

    printf("%%.4g: %.4g\n", 123456.);
    printf("%%.4g: %.4g\n", 12345.6);
    printf("%%.4g: %.4g\n", 1234.56);
    printf("%%.4g: %.4g\n", 123.456);
    printf("%%.4g: %.4g\n", 12.3456);
    printf("%%.4g: %.4g\n", 1.23456);
    printf("%%.4g: %.4g\n", 0.123456);
    printf("%%.4g: %.4g\n", 0.0123456);
    printf("%%.4g: %.4g\n", 0.00123456);
    printf("%%.4g: %.4g\n", 0.000123456);
    printf("%%.4g: %.4g\n", 0.0000123456);
    printf("%%.4g: %.4g\n", 0.00000123456);

    //printf("%d%n\n", 1234, &len);

    //n = scanf("%d%d", &i, &j);
    //printf("n=%d, i=%d, j=%d", n, i, j);
    //n = scanf("%d,%d", &i, &j);
    //printf("n=%d, i=%d, j=%d", n, i, j);
    //n = scanf("%d ,%d", &i, &j);
    //printf("n=%d, i=%d, j=%d", n, i, j);
    //n = scanf("%d, %d", &i, &j);
    //printf("n=%d, i=%d, j=%d\n", n, i, j);
    //n = scanf("%*d%d", &i);
    //printf("n=%d,i=%d\n", n, i);
    //n = scanf("%*s%s", str);
    //printf("%s\n", str);
    //n = scanf("%1d%2d%3d", &i, &j, &k);
    //printf("i=%d,j=%d,k=%d\n", i, j, k);
    //n = scanf("%2d%2s%2d", &i, str, &j);
    //printf("i=%d,str=%s,j=%d\n", i, str, j);
    //n = scanf("%i%i%i", &i, &j, &k);
    //printf("i=%d,j=%d,k=%d\n", i, j, k);
    //n = scanf("%[^0123456789]", str);
    //printf("str=%s\n", str);
    n = scanf("%*d%d%n", &i, &j);
    printf("i=%d,j=%d\n", i, j);


    return 0;
}
