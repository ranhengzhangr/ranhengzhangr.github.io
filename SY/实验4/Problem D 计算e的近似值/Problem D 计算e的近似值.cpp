#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i;
    double t, n, e;

    i = 1;
    e = 1;
    t = 1;
    cin >> n;
    while(t > n)
    {
        e += t;
        i++;
        t *= 1.0 / i;
    }
    cout << fixed
         << setprecision(6)
         << e
         << endl;

    return 0;
}
