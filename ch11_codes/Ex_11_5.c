#include    <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    int total_sec = 3675, hr, min, sec;

    split_time(total_sec, &hr, &min, &sec);

    printf("hr=%d, min=%d, sec=%d\n", hr, min, sec);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    *min = (total_sec - *hr*3600) / 60;
    *sec = total_sec - *hr*3600 - *min*60;

}
