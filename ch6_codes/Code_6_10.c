#include    <stdio.h>

int main(void)
{
    int day, month, year, day1 = 31, month1 = 12, year1 = 0;

    while(1) 
    {
        printf("Enter first date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (month == 0 && day == 0 && year == 0)
            break;
        if (year == 0)
        {
            day1 = day;
            month1 = month;
            year1 = year;
        }
        else if (year < year1)
        {
            day1 = day;
            month1 = month;
            year1 = year;

        }
        else
        {
            int total = month*31 + day;
            int total1 = month1*31 + day1;

            if (total < total1)
            {
                day1 = day;
                month1 = month;
                year1 = year;

            }
        }

    }
    printf("%d/%d/%d is the earliest date\n", month1, day1, year1);
    return 0;

}
