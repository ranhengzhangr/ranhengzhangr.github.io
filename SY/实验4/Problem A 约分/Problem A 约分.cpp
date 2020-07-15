#include <iostream>

int main (void)
{
    using namespace std;

    int a, b, x, y, t;

    cin >> x;
    cin.get();
    cin >> y;
    if(x > y)
        a = x, b = y;
    else
        a = y, b = x;
    while(b > 0)
    {
        a %= b;
        if(a < b)
            t = a, a = b, b = t;
        t = a;
    }
    cout << x / t
         << "/"
         << y / t
         << endl;

    return 0;
}
