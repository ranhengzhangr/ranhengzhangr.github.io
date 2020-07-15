#include <iostream>

#include <iomanip>

#define pi 3.14159

int main (void)
{
    using namespace std;

    float n;

    cin >> n;
    n *= 2 * pi;
    cout << fixed
         << setprecision(5)
         << n
         << endl;

    return 0;
}
