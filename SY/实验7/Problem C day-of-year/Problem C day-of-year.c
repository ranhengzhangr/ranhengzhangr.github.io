#include <stdio.h>

int day_of_year(int month, int day, int year);

int main (void)
{
    int m, d, y;

    while (scanf("%d %d %d", &m, &d, &y) != EOF)
    {
        printf("%d\n", day_of_year(m, d, y));
    }

    return 0;
}

int day_of_year(int month, int day, int year)
{
    int n;

    switch (month)
    {
        case 1:day = day;break;
        case 2:day = day + 31;break;
        case 3:day = day + 59;break;
        case 4:day = day + 90;break;
        case 5:day = day + 120;break;
        case 6:day = day + 151;break;
        case 7:day = day + 181;break;
        case 8:day = day + 212;break;
        case 9:day = day + 243;break;
        case 10:day = day + 273;break;
        case 11:day = day + 304;break;
        case 12:day = day + 334;break;
    }
    n = year % 4;
    while (n == 0&&month > 2)
    {
        day++;
        break;
    }

    return day;
}
