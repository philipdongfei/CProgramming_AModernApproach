#include    <stdio.h>
#include    <stdlib.h>

struct timetable{
    int startmin;
    int endtime;
}flytable[8];

int main(void)
{
    int hours, minutes, total, plans[8],
        min, index;

    flytable[0].startmin = 8 * 60;
    flytable[0].endtime = 10 * 60 + 16;
    flytable[1].startmin = 9 * 60 + 43;
    flytable[1].endtime = 11 * 60 + 52;
    flytable[2].startmin = 11 * 60 + 19;
    flytable[2].endtime = 13 * 60 + 31;
    flytable[3].startmin = 12 * 60 + 47;
    flytable[3].endtime = 15 * 60;
    flytable[4].startmin = 14 * 60;
    flytable[4].endtime = 16 * 60 + 8;
    flytable[5].startmin = 15 * 60 + 45;
    flytable[5].endtime = 17 * 60 + 55;
    flytable[6].startmin = 19 * 60 ;
    flytable[6].endtime = 21 * 60 + 20;
    flytable[7].startmin = 21 * 60 + 45;
    flytable[7].endtime = 23 * 60 + 58;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    total = hours * 60 + minutes;

    for (int i = 0; i < 8; i++)
        plans[i] = abs(flytable[i].startmin - total);

    min = plans[0];

    for (int i = 1; i < 8; i++)
    {
        if (plans[i] < min)
        {
            min = plans[i];
            index = i;
        }
    }
    printf("index=%d, endtime:%d\n", index, flytable[index].endtime);

    return 0;
}
