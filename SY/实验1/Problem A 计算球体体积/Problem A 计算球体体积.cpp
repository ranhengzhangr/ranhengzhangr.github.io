#include <iostream>

#include <iomanip>

#define pi 3.14

int main (void)
{
    using namespace std;

    cout.setf(ios::fixed);

    float r, v;
    cin >> r;
    v = pi * r * r * r * 4 / 3;
    cout << setprecision(2)
         << v
         << endl;

    return 0;
}
