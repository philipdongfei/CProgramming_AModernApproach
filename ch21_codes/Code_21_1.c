#include    <stdio.h>
#include    <stddef.h>

struct s {
    int b[2];
    char a;
    float c;
};

int main(void)
{
    struct s test;
    long int a_size = sizeof(test.a),
             a_offset = offsetof(struct s, a),
             b_size = sizeof(test.b),
             b_offset = offsetof(struct s, b),
             c_size = sizeof(test.c),
             c_offset = offsetof(struct s, c),
             test_size = sizeof(test);

    printf("a: size: %ld, offset: %ld\n", a_size, a_offset);
    printf("b: size: %ld, offset: %ld\n", b_size, b_offset);
    printf("c: size: %ld, offset: %ld\n", c_size, c_offset);

    if (a_size < b_offset)
        printf("between a and b: %ld-byte hole\n", 
                b_offset - a_size);
    if (b_size + b_offset < c_offset)
        printf("between b and c: %ld-byte hole\n", 
                c_offset - b_offset - b_size);
    if (c_size + c_offset < test_size)
        printf("There is a %ld-byte hold after c\n", 
                test_size - c_size - c_offset);

    return 0;

}
