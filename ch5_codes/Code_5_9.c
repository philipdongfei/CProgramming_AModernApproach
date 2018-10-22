#include    <stdio.h>

int main(void)
{
    int day, month, year, day1, month1, year1;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    if (year1 < year)
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                month1, day1, year1, month, day, year);
    else if (year1 > year)
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                month, day, year, month1, day1, year1);
    else {
        if (month1 < month)
            printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                    month1, day1, year1, month, day, year);
        else if (month1 > month)
            printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                    month, day, year, month1, day1, year1);
        else {
            if (day1 < day)
                printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                        month1, day1, year1, month, day, year);
            else if (day1 > day)
                printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
                        month, day, year, month1, day1, year1);
            else
                printf("same date\n");

        }

    }
    return 0;

}
