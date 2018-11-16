#include    "quicksort.h"

void quicksort(struct part a[], int low, int high)
{
    int middle;

    if (low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle-1);
    quicksort(a, middle+1, high);
}

int split(struct part a[], int low, int high)
{
    int part_element_number = a[low].number;
    struct part t_element = a[low];

    for(;;) {
        while (low < high && part_element_number <= a[high].number)
            high--;
        if (low >= high) break;
        a[low++] = a[high];

        while (low < high && a[low].number <= part_element_number)
            low++;
        if (low >= high) break;
        a[high--] = a[low];
    }

    a[high] = t_element;
    return high;
}

