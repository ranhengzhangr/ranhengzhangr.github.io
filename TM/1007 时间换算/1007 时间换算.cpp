#include <iostream>

int main (void)
{
    using namespace std;

    int n;

    cin >> n;
    n -= 800;
    if(n < 0)    n += 2400;
    cout << n
         << endl;

    return 0;
}
