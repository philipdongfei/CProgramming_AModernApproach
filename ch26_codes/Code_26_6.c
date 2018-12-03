#include    <stdio.h>
#include    <time.h>

void time_b();
void time_c();

int main(void)
{
    time_t current = time(NULL);
    struct tm *ptr;
    char date_time[37];

    ptr = localtime(&current);
    strftime(date_time, sizeof(date_time),
            "%A, %B %d, %Y %I:%M", ptr);
    printf("%s%c\n", date_time, ptr->tm_hour<=11 ? 'a' : 'p');
    time_b();
    time_c();

    return 0;
}

void time_b()
{
    time_t current = time(NULL);
    char date_time[22];

    strftime(date_time, sizeof(date_time), 
            "%a, %d %b %y %H:%M", localtime(&current));
    puts(date_time);
}

void time_c()
{
    time_t current = time(NULL);
    struct tm *ptr;
    char date[9], time[12];

    ptr = localtime(&current);
    strftime(date, sizeof(date), "%m/%d/%y", ptr);
    strftime(time, sizeof(time), "%I:%M:%S %p", ptr);

    printf("%s %s\n", date, time[0] == '0' ? &time[1]:time);
}



