#include <iostream>

#include <iomanip>

#include <cmath>

int main (void)
{
    using namespace std;

    float n, x1, y1, x2, y2;

    while(cin >> x1 >> y1 >> x2 >> y2)
    {
        n = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        cout << fixed
             << setprecision(2)
             << n
             << endl;
    }

    return 0;
}
