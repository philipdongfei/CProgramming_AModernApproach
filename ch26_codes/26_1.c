#include    <stdio.h>
#include    <stdlib.h>
#include    <stdarg.h>

int errorf(const char *format, ...);

int max_int(int n, ...)  /* n must be at least 1 */
{
    va_list ap;
    int i, current, largest;

    va_start(ap, n);
    printf("n:%d\n", n);
    largest = va_arg(ap, int);
    printf("largest:%d\n", largest);

    for (i = 1; i < n; i++) {
        current = va_arg(ap, int);
        printf("current:%d\n", current);
        if (current > largest)
            largest = current;
    }
    va_end(ap);
    return largest;
}

int main(void)
{
    int nMax = max_int(3, 10, 30, 20);

    printf("max:%d\n", nMax);
    errorf("%s", "printf error information");
    return 0;
}

int errorf(const char *format, ...)
{
    static int num_errors = 0;
    int n;
    va_list ap;

    num_errors++;
    fprintf(stderr, "** Error %d: ", num_errors);
    va_start(ap, format);
    n = vfprintf(stderr, format, ap);
    va_end(ap);
    fprintf(stderr, "\n");
    return n;
}

