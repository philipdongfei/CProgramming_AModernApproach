#include    <stdio.h>
#include    <stdarg.h>
#include    <stdlib.h>

void int_printf(const char *format, ...)
{
    va_list ap;
    const char *p;
    int digit, i, power, temp;
    char *ch, type;

    va_start(ap, format);

    for (p = format; *p != '\0'; p++) {
        if (*p != '%') {
            putchar(*p);
            continue;
        }
        type = *++p;
        //printf("type: %c\n", type);
        if (type == 'd') {
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
        } else if (type == 's') {
            ch = va_arg(ap,char *);
            //printf("ch: %c\n", ch);
            while ((temp = (int)*ch++) != '\0') {
                putchar(temp);
            }

        }
    }
    va_end(ap);
}

int main(void)
{
    //int_printf("%d, %d\n", 20, -20);
    int_printf("%s\n", "test int_printf");
    return 0;
}
