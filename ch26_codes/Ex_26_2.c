#include    <stdio.h>
#include    <stdarg.h>
#include    <stdlib.h>

void int_printf(const char *format, ...)
{
    va_list ap;
    const char *p;
    int digit, i, power, temp;

    va_start(ap, format);

    for (p = format; *p != '\0'; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }
        if (*++p == 'd') {
            i = va_arg(ap, int);
            if (i < 0) {
                i = -i;
                putchar('-');
            }
            temp = i;
            power = 1;
            while (temp > 9) {
                temp /= 10;
                power *= 10;
            }
            do {
                digit = i / power;
                putchar(digit + '0');
                i -= digit * power;
                power /= 10;

            } while(i > 0);
        }
    }
    va_end(ap);
}

int main(void)
{
    int_printf("%d, %d\n", 20, -20);
    return 0;
}
