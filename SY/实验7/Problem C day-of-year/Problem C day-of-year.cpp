#include <iostream>

int day_of_year(int month, int day, int year);

int main (void)
{
    using namespace std;

    int m, d, y;

    while (cin >> m >> d >> y)
    {
        cout << day_of_year(m, d, y)
             << endl;
    }

    return 0;
}

int day_of_year(int month, int day, int year)
{
    using namespace std;

    switch(month)
    {
        case 1: break;
        case 2: day += 31; break;
        case 3: day += 59; break;
        case 4: day += 90; break;
        case 5: day += 120; break;
        case 6: day += 151; break;
        case 7: day += 181; break;
        case 8: day += 212; break;
        case 9: day += 243; break;
        case 10: day += 273; break;
        case 11: day += 303; break;
        case 12: day += 334; break;
    }
    if(year % 4 == 0&&(year % 100 != 0||year % 400 == 0)){
        day++;
    }

    return day;
}
