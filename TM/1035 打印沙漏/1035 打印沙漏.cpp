#include <iostream>

int main (void)
{
    using namespace std;

    int i, k, t, n;
    char ch;

    cin >> n;
    cin.get();
    ch = cin.get();
    for(k = 0; (k + 1) * (k + 1) * 2 - 1 <= n; k++);
    for(i = 0; i < k * 2 - 1; i++)
    {
        for(t = 0; t < k + abs(k - i - 1); t++)
        {
            if(t < k - abs(k - i - 1) - 1)    cout.put(' ');
            else    cout.put(ch);
        }
        cout << endl;
        n -= abs(k - i - 1) * 2 + 1;
    }
    cout << n
         << endl;

    return 0;
}
