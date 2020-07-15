#include <iostream>

int gcd(int m, int n);

int main (void)
{
    using namespace std;

    int a, b;

    while (cin >> a >> b)
    {
        cout << gcd(a, b)
             << endl;
    }

    return 0;
}

int gcd(int m, int n)
{
    using namespace std;

    int t;

    if(m < n){
        m += n, n = m - n, m -= n;
    }
    while(n > 0)
    {
        t = n;
        m %= n;
        if(m < n){
            m += n, n = m - n, m -= n;
        }
    }

    return t;
}
