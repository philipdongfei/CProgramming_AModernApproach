#include    <stdio.h>

struct date {
    int month, day, year;
};

int day_of_year(struct date d)
{
    int dayth;
    dayth = d.month*30 + d.day;
    return dayth;
}

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
    struct date d1 = {4, 22, 1989}, d2 = {4, 21, 1989};
    printf("dayth: %d\n", day_of_year(d1));
    printf("compare d1 & d2: %d\n", compare_dates(d1, d2));

    return 0;
}


