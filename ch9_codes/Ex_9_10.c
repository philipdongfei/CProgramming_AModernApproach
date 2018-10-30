int max(int n, int a[n])
{
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}

int avg(int n, int a[n])
{
    double avg = 0;

    for (int i = 0; i < n; i++)
    {
        avg += a[i];
    }
    avg = avg / n;

    return avg;
}

int getplusnum(int n, int a[n])
{
    int num = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            ++num;
    }

    return num;
}
