#include    <stdio.h>

int main(void)
{
    int hour, min;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    if (hour > 12)
        printf("%d:%.2d PM\n", hour % 12, min);
    else if (hour == 12)
        printf("%d:%.2d PM\n", hour, min);
    else
        printf("%d:%.2d AM\n", hour, min);

    if (hour == 0)
        printf("12:%.2d AM\n", min);
    else if (hour < 12)
        printf("%d:%.2d AM\n", hour, min);
    else if (hour == 12)
        printf("%d:%.2d PM\n", hour, min);
    else
        printf("%d:%.2d PM\n", hour-12, min);

    return 0;

}
