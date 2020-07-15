#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int n;
    float h, sum;

    cin >> h
        >> n;
    sum = 0;
    while(n > 0)
    {
        sum += h;
        h /= 2.0;
        sum += h;
        n--;
    }
    sum -= h;
    cout << fixed
         << setprecision(1)
         << sum
         << " "
         << fixed
         << setprecision(1)
         << h
         << endl;

    return 0;
}
