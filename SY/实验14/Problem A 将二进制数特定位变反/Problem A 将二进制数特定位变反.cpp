#include <iostream>

int main (void)
{
    using namespace std;

    unsigned short n;

    cin >> n;
    n ^= 15;
    cout << n;

    return 0;
}
