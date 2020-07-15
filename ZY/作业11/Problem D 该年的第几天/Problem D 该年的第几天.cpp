#include <iostream>

int main (void)
{
    using namespace std;

    int y, m, d;

    cin >> y;
    cin.get();
    cin >> m;
    cin.get();
    cin >> d;
    if(m == 2)    d += 31;
    else if(m == 3)    d += 59;
    else if(m == 4)    d += 90;
    else if(m == 5)    d += 120;
    else if(m == 6)    d += 151;
    else if(m == 7)    d += 181;
    else if(m == 8)    d += 212;
    else if(m == 9)    d += 243;
    else if(m == 10)    d += 273;
    else if(m == 11)    d += 304;
    else    d += 335;
    if((y % 4 == 0&&(y % 100 != 0||y % 400 == 0))&&m > 2)    d++;
    cout << d
         << endl;

    return 0;
}
