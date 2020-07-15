#include <iostream>

int main (void)
{
    using namespace std;

    int i, k, n;
    char ch;

    cin >> n;
    ch = 'A';
    for(i = 0; i < n; i++)
    {
        for(k = 0; k < n + i; k++)
        {
            if(k < n - i - 1)
                cout << " ";
            else
                cout << ch;
        }
        cout << endl;
        ch++;
    }

    return 0;
}
