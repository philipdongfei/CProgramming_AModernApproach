double median(double x, double y, double z)
{
    double m; 

    if (x <= y)
    {
        if (y <= z)
            m = y;
        else if (x <= z)
            m = z;
        else
            m = x;

    }else
    {
        if (z <= y)
            m = y;
        else if (x <= z)
            m = x;
        else
            m = z;
    }
    return m;

}
