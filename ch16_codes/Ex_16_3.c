struct complex {
    double real, imaginary;
};

struct complex make_complex(double real, double imaginary)
{
    struct complex c;
    c.real = real;
    c.imaginary = imaginary;

    return c;
}

struct complex add_complex(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;
}

int main(void)
{
    struct complex c1 = {1.0, 2.0}, c2, c3;
    c2 = make_complex(2.0, 3.0);
    c3 = add_complex(c1, c2);

    return 0;

}
