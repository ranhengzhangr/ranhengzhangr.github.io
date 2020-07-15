#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, t;

    while(cin >> n)
    {
        t = 1;
        for(i = 1; i < n; i++)
        {
            t = (t + 1) * 2;
        }
        cout << t
             << endl;
    }

    return 0;
}
