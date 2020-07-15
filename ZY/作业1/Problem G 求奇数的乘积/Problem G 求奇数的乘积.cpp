#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, t, k;

    while(cin >> n)
    {
        t = 1;
        for(i = 0; i < n; i++)
        {
            cin >> k;
            if(k % 2 != 0)    t *= k;
        }
        cout << t
             << endl;
    }

    return 0;
}
