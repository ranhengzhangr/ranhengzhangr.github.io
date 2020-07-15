#include <iostream>

#include <iomanip>

#include <cmath>

int main (void)
{
    using namespace std;

    double x, y, n, t;

    cin >> x;
    y = 1;
    n = x / y;
    t = (y + n) / 2;
    while(fabs(y - t) >= 0.000001)
    {
        y = t;
        n = x / y;
        t = (y + n) / 2;
    }
    cout << fixed
         << setprecision(6)
         << y
         << endl;

    return 0;
}
