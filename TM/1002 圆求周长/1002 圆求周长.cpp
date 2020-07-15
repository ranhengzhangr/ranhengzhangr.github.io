#include <iostream>

#include <iomanip>

#define N 3.14159

int main (void)
{
    using namespace std;

    float t;
    cin >> t;
    t *= 2;
    t *= N;
    cout << fixed
         << setprecision(5)
         << t
         <<endl;

    return 0;
}
