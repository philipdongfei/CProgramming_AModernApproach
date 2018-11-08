#include    <stdio.h>

void encrypt(char *message, int shift);

int main(void)
{

    char input[80] = {0,}, chInput;
    int pos = 0, n;

    printf("Enter message to be encrypted: ");
    while ((chInput = getchar()) != '\n')
    {
        input[pos] = chInput;
        pos++;
    }
    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);
    encrypt(input, n);
    printf("Encrypted message: ");
    printf("%s\n", input);

#if 0
    for (int i = 0; i < pos; i++)
    {
        char ch = input[i];
        if (ch >= 'a' && ch <= 'z')
            encrypt[i] = ((ch - 'a') + n) % 26 + 'a';
        else if (ch >= 'A' && ch <= 'Z')
            encrypt[i] = ((ch - 'A') + n) % 26 + 'A';
        else
            encrypt[i] = ch;

    }
    printf("Encrypted message: ");
    for (int j = 0; j < pos; j++)
        printf("%c", encrypt[j]);
    printf("\n");
#endif

    return 0;
    
}

void encrypt(char *message, int shift)
{
    char ch, n = shift;
    while((ch = *message) != '\0')
    {
        if (ch >= 'a' && ch <= 'z')
            *message = ((ch - 'a') + n) % 26 + 'a';
        else if (ch >= 'A' && ch <= 'Z')
            *message = ((ch - 'A') + n) % 26 + 'A';
        else
            *message = ch;

        message++;
    }
}
