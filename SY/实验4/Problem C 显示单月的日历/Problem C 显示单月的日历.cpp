#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, k, n;

    cin >> n >> k;
    for(i = 1; i < n + k; i++)
    {
        if(i < k)
            cout << "   ";
        else
            cout << setw(3)
                 << right
                 << i - k + 1;
        if(i % 7 == 0&&i + 1 < n + k)
            cout << endl;
    }
    cout << endl;

    return 0;
}
