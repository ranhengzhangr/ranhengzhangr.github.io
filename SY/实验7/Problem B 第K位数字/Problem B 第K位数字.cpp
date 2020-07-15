#include <iostream>

int digit(int n, int k);

int main (void)
{
    using namespace std;

    int a, b;

    while (cin >> a >> b)
    {
        cout << digit(a, b)
             << endl;
    }

    return 0;
}

int digit(int n, int k)
{
    using namespace std;

    int i, t;

    for(i = 0; i < k; i++)
    {
        t = n % 10;
        n /= 10;
    }

    return t;
}
