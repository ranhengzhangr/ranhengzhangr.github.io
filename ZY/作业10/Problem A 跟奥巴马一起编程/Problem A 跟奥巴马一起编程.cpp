#include <iostream>

int main (void)
{
    using namespace std;

    int x, y, n;
    char ch;

    cin >> n;
    cin.get();
    cin.get(ch);
    for(x = 0; x < (n + 1) / 2; x++)
    {
        cout << ch;
        for(y = 1; y < n - 1; y++)
        {
            if(x == 0||x == n / 2 - 1)    cout << ch;
            else    cout << " ";
        }
        cout << ch
             << endl;
    }

    return 0;
}
