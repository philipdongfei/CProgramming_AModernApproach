#include    <stdio.h>

#define log_to_string(str, fmt, arg...) \
    do { \
        sprintf(str,"%s: " fmt, "myprog", ##arg); \
    } while(0)

#define TEST_DO(a,b,c) \
    do {            \
        printf("%s", a);\
        printf("%s", b);\
        printf("%s", c);\
        if ((a) > (b)){         \
            if ((a) < (c)) printf("%s\n", a);\
            else if ((b) > (c)) printf("%s\n", b); \
            else printf("%s\n", c);        \
        }else{                 \
            if ((b) < (c)) printf("%s\n", b);  \
            else if ((a) > (c)) printf("%s\n", a); \
            else printf("%s\n", c); \
        }               \
    } while(0)
//#define MEDIAN(x,y,z) do{printf("test");}while(0) 
#define  CHECK(x,y,n)  (((x)>=0 && (x)<(n-1))&&((y)>=0&&(y)<(n-1))?1:0)
#define POLYNOMIAL(x) (3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6)

int main(void)
{
    char buf[1024] = {0,};
    int x, y, n;
    x = 5, y = 8, n = 10;
    printf("check(5,8,10):%d\n", CHECK(x,y,n));
    printf("median(5,8,10):%d\n", TEST_DO(x,y,n));
    x = 1;
    printf("polynomial(1): %d\n", POLYNOMIAL(x));
    log_to_string(buf, "%s\n", "No assignment, OK");

    return 0;
}
