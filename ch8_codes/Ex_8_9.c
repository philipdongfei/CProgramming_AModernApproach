int main(void)
{
    double temperature_readings[30][24];

    double avg_day=0.0, avg_hours[30] = {0.0,};

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 24; j++)
        {
            avg_hours[i] += temperature_readings[i][j];
        }
        avg_hours[i] = avg_hours / 24.0;
        avg_day += avg_hours[i];
    }
    avg_day = avg_day / 30;

    return 0;
}
