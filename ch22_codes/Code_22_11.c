#include    <stdio.h>
#include    <stdlib.h>


char Month[][32] = {"\0","Jan","Feb","Mar","Apr",
                    "May","Jun","Jul","Aug",
                    "Sep","Oct","Nov","Dec"};
int main(void)
{
    char strline[256] = {0,};
    int month, day, year;
    
    printf("Enter the time: ");
    if (fgets(strline, sizeof(strline), stdin) == NULL)
    {
        exit(EXIT_FAILURE);
    }
    if (sscanf(strline, "%d-%d-%d", &month, &day, &year) == 3)
        printf("%s %02d, %04d\n",Month[month],day,year);
    else if (sscanf(strline,"%d/%d/%d", &month, &day, &year) == 3)
        printf("%s %02d, %04d\n",Month[month],day,year);
    else
        printf("Date not in the proper form\n");

    return 0;
}
