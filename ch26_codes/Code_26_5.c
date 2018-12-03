#include    <stdio.h>
#include    <time.h>

#define ALL_DAY_SEC 24.0*60.0*60.0

int main(void)
{
    int month, day, year;
    double allsec = 0, alldaysec = 0;
    struct tm t1, t2;
    time_t tt1, tt2;

    t1.tm_sec = t1.tm_min = t1.tm_hour = 0;
    t1.tm_isdst = -1;
    t2.tm_sec = t2.tm_min = t2.tm_hour = 0;
    t2.tm_isdst = -1;


    printf("time1: ");
    scanf("%02d/%02d/%04d", &month, &day, &year);
    t1.tm_mon = month - 1;
    t1.tm_mday = day;
    t1.tm_year = year - 1900;
    printf("time2: ");
    scanf("%02d/%02d/%04d", &month, &day, &year);
    t2.tm_mon = month - 1;
    t2.tm_mday = day;
    t2.tm_year = year - 1900;
    tt1 = mktime(&t1);
    tt2 = mktime(&t2);
    allsec = difftime(tt2,tt1);
    alldaysec = ALL_DAY_SEC;
    
    printf("diff day:%.1f: %.1f\n",allsec, allsec/alldaysec);

    return 0;
}
