#include <iostream>

#include <iomanip>

#include <cmath>

int main (void)
{
    using namespace std;

    int i, n;
    float k, t;

    while(cin >> t >> n)
    {
        k = 0;
        for(i = 0; i < n; i++)
        {
            k += t;
            t = sqrt(t);
        }
        cout << fixed
             << setprecision(2)
             << k
             << endl;
    }

    return 0;
}
