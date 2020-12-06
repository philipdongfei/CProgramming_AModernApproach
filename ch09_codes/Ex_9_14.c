bool has_zero(int a[], int n)
{
    int i,nZero = 0, nNozero = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
            ++nZero;
        else
            ++nNozero;
    }
    if (nZero == n)
        return true;
    
    return false;
}

