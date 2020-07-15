#include <iostream>

int main (void)
{
    using namespace std;

    unsigned int n;

    cin >> n;
    n &= 255;
    cout << n;

    return 0;
}
