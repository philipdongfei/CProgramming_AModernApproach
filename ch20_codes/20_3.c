#include    <stdio.h>

struct file_date {
    unsigned int day: 5, month: 4, year: 7;
};

union int_date{
    unsigned short i;
    struct file_date fd;
};

void print_date(unsigned short n)
{
    union int_date u;

    u.i = n;
    printf("%d/%d/%d\n", u.fd.month, u.fd.day, u.fd.year + 1980);
}

typedef unsigned char BYTE;
typedef unsigned short WORD;

union {
    struct {
        WORD ax, bx, cx, dx;
    }word;
    struct {
        BYTE al, ah, bl, bh, cl, ch, dl, dh;
    }byte;
}regs;

int main(void)
{
    regs.byte.ah = 0x12;
    regs.byte.al = 0x34;
    printf("AX: %hx\n", regs.word.ax);

    return 0;
}
