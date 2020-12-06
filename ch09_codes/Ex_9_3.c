int gcd(int x, int y)
{
    int a = x, b = y;

    while (b != 0)
    {
        gcd = a % b;
        a = b;
        b = gcd;
    }

    return a;
}
