#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    float n;

    cin >> n;
    n *= 2;
    cout << fixed
         << setprecision(2)
         << n
         << endl;

    return 0;
}
