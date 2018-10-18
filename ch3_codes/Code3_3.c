#include    <stdio.h>

int main(void)
{
    int gs1, iden, code, number, chkdig;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &iden, &code, &number, &chkdig);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", iden);
    printf("Publisher code: %d\n", code);
    printf("Item number: %d\n", number);
    printf("Check digit: %d\n", chkdig);

    return 0;
}
