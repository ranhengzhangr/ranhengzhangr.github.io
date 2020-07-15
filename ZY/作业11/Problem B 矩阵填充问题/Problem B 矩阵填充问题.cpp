#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, n, k, x, y;

    cin >> n;
    int A[n][n];

    for(i = 0, k = 1; i < n / 2; i++)
    {
        for(x = i, y = i; x < n - i - 1; x++, k++)
        {
            A[x][y] = k;
        }
        for(x = n - i - 1, y = i; y < n - i - 1; y++, k++)
        {
            A[x][y] = k;
        }
        for(x = n - i - 1, y = n - i - 1; x > i; x--, k++)
        {
            A[x][y] = k;
        }
        for(x = i, y = n - i - 1; y > i; y--, k++)
        {
            A[x][y] = k;
        }
    }
    if(n % 2 != 0){
        A[n / 2][n / 2] = k;
    }
    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            cout << noshowpos
                 << setw(4)
                 << right
                 << A[x][y];
        }
        cout << endl;
    }

    return 0;
}
