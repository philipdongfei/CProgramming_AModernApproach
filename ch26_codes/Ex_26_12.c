#include    <stdio.h>
#include    <time.h>

time_t getFirstDay(int year)
{
    time_t firstday;
    struct tm *t;
    time(&firstday);
    t = localtime(&firstday);
    t->tm_year = year - 1900;
    t->tm_mday = 1;
    t->tm_mon = 1;
    t->tm_yday = 0;
    t->tm_sec = 0;
    t->tm_min = 0;
    t->tm_hour = 12;
    t->tm_isdst = -1;
    firstday = mktime(t);
    printf("%02d/%02d/%04d\n", t->tm_mon, t->tm_mday, (t->tm_year)+1900);

    return firstday;
}

int main(void)
{
    int year  = 2009;

    time_t tm = getFirstDay(year);
    puts(ctime(&tm));

    return 0;

}
