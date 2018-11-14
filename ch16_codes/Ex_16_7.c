#include    <stdio.h>

struct fraction {
    int numerator, denominator;
};

int gcd(int a, int b)
{
    if (b == 0) return a;
    if (a < b) return gcd(b, a);
    else return gcd(b, a%b);
}

struct fraction reduce_fraction(struct fraction f)
{
    struct fraction r_f;
    int common = gcd(f.numerator, f.denominator);
    r_f.numerator = f.numerator / common;
    r_f.denominator = f.denominator / common;

    return r_f;
}

struct fraction add_fraction(struct fraction f1, struct fraction f2)
{
    struct fraction rf1, rf2;
    rf1 = (f1);
    rf2 = (f2);

    return reduce_fraction((struct fraction) {.numerator = rf1.numerator*rf2.denominator+rf1.denominator*rf2.numerator, .denominator = rf1.denominator*rf2.denominator});

}

struct fraction sub_fraction(struct fraction f1, struct fraction f2)
{
    struct fraction rf1, rf2;
    rf1 = (f1);
    rf2 = (f2);
    return reduce_fraction((struct fraction) {.numerator = rf1.numerator*rf2.denominator-rf1.denominator*rf2.numerator, .denominator = rf1.denominator*rf2.denominator});
}
struct fraction multiply_fraction(struct fraction f1, struct fraction f2)
{
    struct fraction rf1, rf2;
    rf1 = (f1);
    rf2 = (f2);
    return reduce_fraction((struct fraction) {.numerator = rf1.numerator*rf2.numerator, .denominator = rf1.denominator*rf2.denominator});
}
struct fraction div_fraction(struct fraction f1, struct fraction f2)
{
    struct fraction rf1, rf2;
    rf1 = (f1);
    rf2 = (f2);
    return reduce_fraction((struct fraction) {.numerator = rf1.numerator*rf2.denominator, .denominator = rf1.denominator*rf2.numerator});

}

int main(void)
{
    struct fraction f1 = {1, 3}, f2 = {2, 3}, f3;

    f3 = add_fraction(f1, f2);
    f3 = sub_fraction(f1, f2);
    f3 = multiply_fraction(f1, f2);
    f3 = div_fraction(f1, f2);

    return 0;
}
