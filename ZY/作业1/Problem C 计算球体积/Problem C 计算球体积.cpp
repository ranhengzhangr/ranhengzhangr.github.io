#include <iostream>

#include <iomanip>

#define PI 3.1415927

int main (void)
{
    using namespace std;

    double r, v;

    while(cin >> r)
    {
        v = 4.0 / 3 * r * r * r * PI;
        cout << fixed
             << setprecision(3)
             << v
             << endl;
    }

    return 0;
}
