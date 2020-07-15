#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    float n;

    while(cin >> n)
    {
        if(n < 0)    n = -n;
        cout << fixed
             << setprecision(2)
             << n
             << endl;
    }

    return 0;
}
