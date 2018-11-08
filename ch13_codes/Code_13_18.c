#include    <stdio.h>

int main(void)
{
    char month[12][16] = {"Jan","Feb", "Mar", "Apr", "May", "Jun", "Jul",
    "Aug", "Sep", "Oct", "Nov", "Dec"};
    int mon, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mon, &day, &year);

    printf("You entered the date %s %d, %4d\n", month[mon-1], day, year);

    return 0;
}
