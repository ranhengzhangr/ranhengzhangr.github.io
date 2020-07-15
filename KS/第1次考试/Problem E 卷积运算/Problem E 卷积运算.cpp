#include <iostream>

int main (void)
{
    using namespace std;

    int x, y, m, n, p, q;

    cin >> n;
    int F[n][n];

    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            cin >> F[x][y];
        }
    }
    cin >> m;
    int G[m][m];

    for(x = 0; x < m; x++)
    {
        for(y = 0; y < m; y++)
        {
            cin >> G[x][y];
        }
    }
    int H[n - m + 1][n - m + 1];

    for(x = 0; x <= n - m; x++)
    {
        for(y = 0; y <= n - m; y++)
        {
            H[x][y] = 0;
            for(p = 0; p < m; p++)
            {
                for(q = 0; q < m; q++)
                {
                    H[x][y] += F[x + p][y + q] * G[p][q];
                }
            }
        }
    }
    for(x = 0; x <= n - m; x++)
    {
        for(y = 0; y <= n - m; y++)
        {
            if(y > 0)    cout << " ";
            cout << H[x][y];
        }
        cout << endl;
    }

    return 0;
}
