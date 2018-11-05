#include    <stdio.h>
#include    <stdlib.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int hours, minutes, desired_time, 
        departure, arrival;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    desired_time = hours * 60 + minutes;

    find_closest_flight(desired_time, &departure, &arrival);
    printf("desired_time: %d, departure time: %d:%d, arrival time: %d:%d\n", 
            desired_time, departure/60, departure%60, arrival/60,
            arrival%60);
    return 0;
}


void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int plans[8], arrival[8], departure[8], 
        min, index = 0;
    plans[0] = abs(8 * 60 - desired_time);
    plans[1] = abs(9 * 60 + 43 - desired_time);
    plans[2] = abs(11 * 60 + 19 - desired_time);
    plans[3] = abs(12 * 60 + 47 - desired_time);
    plans[4] = abs(2 * 60 + 0 - desired_time);
    plans[5] = abs(3 * 60 + 45 - desired_time);
    plans[6] = abs(7 * 60 + 0 - desired_time);
    plans[7] = abs(9 * 60 + 45 - desired_time);
    departure[0] = 8 * 60;
    departure[1] = 9 * 60 + 43;
    departure[2] = 11 * 60 + 19;
    departure[3] = 12 * 60 + 47;
    departure[4] = 2 * 60 + 0;
    departure[5] = 3 * 60 + 45;
    departure[6] = 7 * 60 + 0;
    departure[7] = 9 * 60 + 45;
    arrival[0] = 10 * 60 + 16;
    arrival[1] = 11 * 60 + 52;
    arrival[2] = 13 * 60 + 31;
    arrival[3] = 15 * 60 + 0;
    arrival[4] = 16 * 60 + 9;
    arrival[5] = 17 * 60 + 55;
    arrival[6] = 21 * 60 + 20;
    arrival[7] = 23 * 60 + 58;

    min = plans[0];

    for (int i = 1; i < 8; i++)
    {
        if (plans[i] < min)
        {
            min = plans[i];
            index = i;
        }
    }
    *departure_time = departure[index];
    *arrival_time = arrival[index];


}
