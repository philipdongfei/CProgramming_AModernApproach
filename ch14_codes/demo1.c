#include    <stdio.h>

#define TEST_DO(a,b,c) \
    do {                \
        printf("%d,%d,%d\n", a, b, c);  \
            if ((a) > (b)){                        \
                if ((a) < (c)) printf("%d\n", (a));   \
                else if ((b) > (c)) printf("%d\n", (b)); \
                else printf("%d\n", (c));                \
            }else {                                     \
                if ((b) < (c)) printf("%d\n", (b));       \
                else if ((a) > (c)) printf("%d\n", (a));   \
                else printf("%d\n", (c));              \
        }                                           \
    }while (0)

int main(void)
{
    int a, b, c;
    a = 1, b = 3, c = 2;
    TEST_DO(a, b, c);
    return 0;
}
