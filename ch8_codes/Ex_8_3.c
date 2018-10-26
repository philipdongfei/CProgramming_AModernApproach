#include    <stdio.h>
#include    <stdbool.h>

int main(void)
{
    bool weekend[7] ={[0] = true, [6] = true};
    // bool weekend[7] = {true, false, false, false, false, false, true};

    for (int i = 0; i < 7; i++)
        printf("weedend[%d] = %d\n",i, weekend[i]);

    return 0;
}
