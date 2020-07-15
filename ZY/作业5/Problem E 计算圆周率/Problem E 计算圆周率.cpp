#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i;
    double n, k, sum;

    cin >> n;
    k = 1;
    sum = 0;
    i = 1;
    while(k >= n)
    {
        sum += k;
        k *= i;
        k /= 2 * i + 1;
        i++;
    }
    cout << fixed
         << setprecision(6)
         << sum * 2
         << endl;

    return 0;
}
