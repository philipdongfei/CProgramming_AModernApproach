#include    <stdio.h>

int main(void)
{
    int year, month, day;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Your entered the date %04d%02d%02d\n", year, month, day);

    return 0;
}
