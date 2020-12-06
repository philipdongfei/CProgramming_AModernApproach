#include    <stdio.h>
#include    <stdlib.h>

int main(void)
{
    int hours, minutes, total, plans[8],
        min, index;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    total = hours * 60 + minutes;

    plans[0] = abs(8 * 60 - total);
    plans[1] = abs(9 * 60 + 43 - total);
    plans[2] = abs(11 * 60 + 19 - total);
    plans[3] = abs(12 * 60 + 47 - total);
    plans[4] = abs(2 * 60 + 0 - total);
    plans[5] = abs(3 * 60 + 45 - total);
    plans[6] = abs(7 * 60 + 0 - total);
    plans[7] = abs(9 * 60 + 45 - total);

    min = plans[0];

    for (int i = 1; i < 8; i++)
    {
        if (plans[i] < min)
        {
            min = plans[i];
            index = i;
        }
    }
    printf("index=%d\n", index);

    return 0;
}
