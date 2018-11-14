struct color {
    int red;
    int green;
    int blue;
};

int main(void)
{
    const struct color MAGENTA = {255, 0, 255}, 
          b = {.red = 0,.blue=0};

    return 0;
}
