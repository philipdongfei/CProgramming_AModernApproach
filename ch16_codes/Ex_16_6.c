#include    <stdio.h>

struct time {
    int hours, minutes, seconds;
};

struct time split_time(long total_seconds)
{
    struct time t;

    t.hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    t.minutes = total_seconds / 60;
    t.seconds = total_seconds % 60;

    return t;
}

int main(void)
{
    struct time curr_time;
    curr_time = split_time(3670);

    printf("hours=%d, minnutes=%d, seconds=%d\n", curr_time.hours, 
            curr_time.minutes, curr_time.seconds);

    return 0;
}

