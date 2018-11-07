/* Prints a one-month reminder list */
#include    <stdio.h>
#include    <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */
#define TIME 6 

int read_line(char str[], int n); 

int main(void) 
{ 
    char reminders[MAX_REMIND][MSG_LEN+3];
    char days[MAX_REMIND][TIME];
    char times[MAX_REMIND][TIME];
    char day_str[TIME] = {0}, time_str[TIME]={0}, msg_str[MSG_LEN+1]={0};
    int month, day,hour, min, i, j, num_remind = 0;
#if 0
    if (strcmp("03/02", "12/01") < 0)
        printf("<\n");
    else
        printf(">=\n");
#endif


    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d/%2d", &month, &day);
        if (day == 0 || month == 0)
            break;
        if (day < 0 || day > 31){
            printf("day error\n");
            continue;
        }
        if (month < 0 || month > 12) {
            printf("month error\n");
            continue;
        }
        sprintf(day_str, "%02d/%02d", month, day);
        //printf("day_str:%s\n", day_str);
        scanf("%2d:%2d", &hour, &min);
        sprintf(time_str, "%02d:%02d", hour, min);

        read_line(msg_str, MSG_LEN);
        for (i = 0; i < num_remind; i++) {
            int flag = 0;
            if ((flag = strcmp(day_str, days[i])) < 0)
                break;
            else {
                //printf(">= %s - %s\n", day_str, days[i]);
                if (flag == 0) {
                    if (strcmp(time_str, times[i]) < 0)
                        break;
                }
            } 
        }
        for (j = num_remind; j > i; j--)
        {
            strcpy(reminders[j], reminders[j-1]);
            strcpy(days[j], days[j-1]);
            strcpy(times[j], times[j-1]);
        }

        strcpy(days[i], day_str);
        strcpy(times[i], time_str);
        strcpy(reminders[i], day_str);
        strcat(reminders[i], " ");
        strcat(reminders[i], time_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }
    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n'){
        if (i < n)
            str[i++] = ch;

    }
    str[i] = '\0';
    return i;
}

