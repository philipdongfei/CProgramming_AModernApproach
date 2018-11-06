#include    <stdio.h>

#define N 10

//void find_two_largest(int a[], int n, int *largest, int *second_largest);
void find_two_largest(const int *a, int n, int *largest, 
        int *second_largest);

int main(void)
{
    int n = N, b[N], largest, sec_largest;

    printf("Ented %d numbers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    find_two_largest(b, n, &largest, &sec_largest);

    printf("largest: %d\n", largest);
    printf("second_largest: %d\n", sec_largest);

    return 0;
}

void find_two_largest(const int *a, int n, int *largest, 
        int *second_largest)
{
    int *p;

    if (*a > *(a+1)) {
        *largest = *a;
        *second_largest = *(a + 1);
    } else {
        *largest = *(a + 1);
        *second_largest = *a;
    }
    for (p = a + 2; p < a + n; p++) {
        if (*p > *largest) {
            *second_largest = *largest;
            *largest = *p;
        }else if (*p > *second_largest)
            *second_largest = *p;
    }

}
#if 0
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;
    if (a[0] > a[1]) {
        *largest = a[0];
        *second_largest  = a[1];
    } else {
        *largest = a[1];
        *second_largest = a[0];
    }

    for (i = 2; i < n; i++) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest)
            *second_largest = a[i];
    }
}
#endif
