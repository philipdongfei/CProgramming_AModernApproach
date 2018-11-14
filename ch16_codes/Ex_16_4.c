typedef struct {
    double real, imaginary;
} Complex;

Complex make_complex(double real, double imaginary)
{
    Complex c;
    c.real = real;
    c.imaginary = imaginary;
    return c;
}

Complex add_complex(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;
    return c3;
}

int main(void)
{
    Complex c1 = {1.0, 2.0}, c2, c3;
    c2 = make_complex(2.0, 3.0);
    c3 = add_complex(c2, c1);

    return 0;
}
