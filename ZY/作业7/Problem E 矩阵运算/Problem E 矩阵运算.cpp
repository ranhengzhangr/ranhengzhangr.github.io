#include <iostream>

int main (void)
{
    using namespace std;

    int n, x, y, sum;

    cin >> n;
    int A[n][n];

    sum = 0;
    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            cin >> A[x][y];
            if(x + y != n - 1&&x != n - 1&&y != n - 1)    sum += A[x][y];
        }
    }
    cout << sum
         << endl;

    return 0;
}
