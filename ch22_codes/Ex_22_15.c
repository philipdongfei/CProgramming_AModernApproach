
int main(void)
{
    FILE *fp;

    fseek(fp, n*64L, SEEK_SET);
    fseek(fp , -64L, SEEK_END);
    fseek(fp, 64L, SEEK_CUR);
    fseek(fp, -64L, SEEK_CUR);

    return 0;
}
