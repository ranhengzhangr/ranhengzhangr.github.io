#include <iostream>

int main (void)
{
    using namespace std;

    int n;

    cin >> n;
    n -= 800;
    while(n < 0)    n += 2400;
    while(n > 2359)    n -= 2400;
    cout << n
         << endl;

    return 0;
}
