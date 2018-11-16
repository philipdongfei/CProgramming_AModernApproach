//#include    <stdio.h>

#define  GENERIC_MAX(type)    \
    type type##_max(type x, type y) \
    {                               \
        return x > y ? x : y;       \
    }                               \

#define PRINT_INT(n)  printf(#n " = %d\n", n)
#define MAX(x, y)   ((x)>(y)?(x):(y))
#define IS_EVEN(n) ((n)%2==0)
#define TOUPPER(c)  ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
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

/*
#define TEST_DO(a,b,c) \
    do {            \
        printf("%s", a);\
        printf("%s", b);\
        printf("%s", c);\
    } while(0)
    */

#define ECHO(s)     \
    do {            \
        gets(s);    \
        puts(s);    \
    } while(0)
#define CHECK_ZERO(divisor) \
    if (divisor == 0)   \
        printf("*** Attempt to divide by zero on line %d  "  \
                "of file %s ***\n", __LINE__, __FILE__)


#define ADD(x,y) (x+y)
#define MK_STR(x) #x

#define JOIN(x,y,z) x##y##z

#define TEST(condition, ...) ((condition)? \
        printf("Pass test: %s\n", #condition): \
        printf(__VA_ARGS__))

#define FUNCTION_CALLED() printf("%s called\n", __func__);
#define FUNCTION_RETURNS() printf("%s returns\n", __func__);

#define DEBUG

#if INT_MAX < 100000
//#error int type is too small
#endif

#if defined(WIN32)

#elif defined(MAC_OS)

#elif defined(LINUX)

#else
//#error No operating system specified
#endif


static GENERIC_MAX(float);
static GENERIC_MAX(int);


void f();

int main()
{
    int x, y,z, i;
    float a, b;
    char    Input[256] = {0,};
    //14.3.10
    char empty_string[] = MK_STR();
    int JOIN(a,b,c), JOIN(a,b,), JOIN(a,,c), JOIN(,,c);
    abc = ab = ac = c = 0;
    

    x = 1;y = 2;z = 0;
    TEST_DO(x,y,z);
    printf("max: %d\n",int_max(x, y) );
    printf("max: %d\n",ADD( ,y) );  //14.3.10
    a = 1.2222; b = 0.2222;
    printf("max: %f\n", float_max(a, b));

    CHECK_ZERO(x);
    PRINT_INT(y/x);
    i = MAX(x+1, y+3);
    if (IS_EVEN(i)) i++;
    printf("i=%d\n", i);

    //14.3.11
    TEST(x <= y, "x : %d exceeds %d\n", x, y);
    TEST(y <= x, "y : %d exceeds %d\n", y, x);

    //14.3.8
    printf("Wacky Windows (c) 2010 Wacky Software, Inc.\n");
    printf("Compiled on %s at %s\n", __DATE__, __TIME__);
    y = 0;
#if 0
    CHECK_ZERO(y);
    a = x / y;
#endif
    //14.3.9
    printf("__STDC_HOSTED__:%d\n__STDC_VERSION__:%ld\n",__STDC_HOSTED__, 
             __STDC_VERSION__);
    // 14.3.7
    ECHO(Input);
    f();

#if defined DEBUG
    printf("defined DEBUG\n");
#endif
    
    return 0;
}

void f() {
    FUNCTION_CALLED();    //display "f called" 
    printf("f()\n");
    FUNCTION_RETURNS();   // display "f reurns"
}
