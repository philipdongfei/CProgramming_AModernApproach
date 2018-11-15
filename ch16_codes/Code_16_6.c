#include    <stdio.h>

struct date {
    int month, day, year;
};

int compare_dates(struct date d1, struct date d2)
{
    if (d1.year < d2.year)
    {
        return -1;
    } else if (d1.year == d2.year)
    {
        if (d1.month < d2.month)
            return -1;
        else if (d1.month == d2.month){
            if (d1.day < d2.day)
                return -1;
            else if (d1.day == d2.day)
                return 0;
            else 
                return 1;
        }
        else
            return 1;
    }else
        return 1;

}

int main(void)
{
    struct date time[2];

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &time[0].month, &time[0].day, &time[0].year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &time[1].month, &time[1].day, &time[1].year);

    printf("compare: %d\n", compare_dates(time[0], time[1]));

    /*
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
    */
    return 0;

}
