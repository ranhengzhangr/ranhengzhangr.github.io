#include <iostream>

#include <iomanip>

#include <cmath>

int main (void)
{
    using namespace std;

    float a, b, c;

    cin >> a
        >> b;
    c = sqrt(a * a + b * b);
    cout << fixed
         << setprecision(5)
         << c
         << endl;

    return 0;
}
