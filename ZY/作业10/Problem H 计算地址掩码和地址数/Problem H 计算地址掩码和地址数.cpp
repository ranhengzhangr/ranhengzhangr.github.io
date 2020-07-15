#include <iostream>

#include <cmath>

int address(int n);

int main (void)
{
    using namespace std;

    int i, n, k;

    while(cin >> n)
    {
        i = 0;
        k = pow(2, 32 - n) - 2;
        while(n >= 8)
        {
            if(i > 0)    cout << ".";
            cout << "255";
            i++;
            n -= 8;
        }
        for(; i < 4; i++)
        {
            if(i > 0)    cout << ".";
            cout << address(n);
            n = 0;
        }
        cout << " "
             << k
             << endl;
    }

    return 0;
}

int address(int n)
{
    using namespace std;

    int i, k;

    k = 0;
    for(i = 0; i < n; i++)
    {
        k += pow(2, i);
    }

    return k;
}
