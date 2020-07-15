#include <iostream>

#include <cmath>

int main (void)
{
    using namespace std;

    int n, t, x, y;

    cin >> n;
    t = sqrt(n / 2);
    for(x = 0; x < t; x++)
    {
        y = sqrt(n - x * x);
        if(x * x + y * y == n){
            cout << x
                 << " "
                 << y
                 << endl;
        }
    }

    return 0;
}
