#include <iostream>

int main (void)
{
    using namespace std;

    int n, t;

    cin >> n;
    t = n / 100;
    n %= 100;
    t += n / 10 * 10 + n % 10 * 100;
    cout << t
         << endl;

    return 0;
}
