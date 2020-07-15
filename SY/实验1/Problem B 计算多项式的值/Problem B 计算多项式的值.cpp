#include <iostream>

int main (void)
{
    using namespace std;

    int n, t;

    cin >> n;
    t = 3 * n * n * n * n * n + 2 * n * n * n * n - 5 * n * n * n - n * n + 7 * n - 6;
    cout << t
         << endl;

    return 0;
}
