#include <iostream>

int main (void)
{
    using namespace std;

    int i, m, n, k, x, y;

    cin >> m
        >> n
        >> k;
    int A[m][n], B[n][k], C[m][k];

    for(x = 0; x < m; x++)
    {
        for(y = 0; y < n; y++)
        {
            cin >> A[x][y];
        }
    }
    for(x = 0; x < n; x++)
    {
        for(y = 0; y < k; y++)
        {
            cin >> B[x][y];
        }
    }
    for(x = 0; x < m; x++)
    {
        for(y = 0; y < k; y++)
        {
            C[x][y] = 0;
            for(i = 0; i < n; i++)
            {
                C[x][y] += A[x][i] * B[i][y];
            }
        }
    }
    for(x = 0; x < m; x++)
    {
        for(y = 0; y < k; y++)
        {
            if(y > 0)    cout << " ";
            cout << C[x][y];
        }
        cout << endl;
    }

    return 0;
}
