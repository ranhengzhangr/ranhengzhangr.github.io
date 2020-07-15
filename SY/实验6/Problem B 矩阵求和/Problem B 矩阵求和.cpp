#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, n, x, y, sum;

    cin >> n;
    int A[n][n];

    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            cin >> A[x][y];
        }
    }
    for(i = 0; i < n; i++)
    {
        sum = 0;
        for(x = i, y = 0; y < n; y++)
        {
            sum += A[x][y];
        }
        cout << setw(5)
             << right
             << sum;
    }
    cout << endl;
    for(i = 0; i < n; i++)
    {
        sum = 0;
        for(x = 0, y = i; x < n; x++)
        {
            sum += A[x][y];
        }
        cout << setw(5)
             << right
             << sum;
    }
    cout << endl;

    return 0;
}
