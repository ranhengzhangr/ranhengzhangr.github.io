#include <iostream>

int main (void)
{
    using namespace std;

    int y, m, d;

    cin >> y
        >> d;
    if((y % 4 == 0&&(y % 100 != 0||y % 400 == 0))&&d > 59)    d--;
    if(d > 355)    m = 12;
    else if(d > 304)    m = 11, d -= 304;
    else if(d > 273)    m = 10, d -= 273;
    else if(d > 243)    m = 9, d -= 243;
    else if(d > 212)    m = 8, d -= 212;
    else if(d > 181)    m = 7, d -= 181;
    else if(d > 151)    m = 6, d -= 151;
    else if(d > 120)    m = 5, d -= 120;
    else if(d > 90)    m = 4, d -= 90;
    else if(d > 59)    m = 3, d -= 59;
    else if(d > 31)    m = 2, d -= 31;
    else    m = 1;
    cout << "month = "
         << m
         << ", day = "
         << d
         << endl;

    return 0;
}
