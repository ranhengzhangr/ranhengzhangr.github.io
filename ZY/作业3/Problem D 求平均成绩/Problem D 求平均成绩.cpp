#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int m, n, x, y, t, k;
    float sum;

    while(cin >> n >> m)
    {
        int A[n][m];
        float C[m];

        for(x = 0; x < n; x++)
        {
            for(y = 0; y < m; y++)
            {
                cin >> A[x][y];
            }
        }
        for(x = 0; x < n; x++)
        {
            sum = 0;
            for(y = 0; y < m; y++)
            {
                sum += A[x][y];
            }
            if(x > 0)    cout << " ";
            cout << fixed
                 << setprecision(2)
                 << sum / m;
        }
        cout << endl;
        for(y = 0; y < m; y++)
        {
            sum = 0;
            for(x = 0; x < n; x++)
            {
                sum += A[x][y];
            }
            C[y] = sum / n;
            if(y > 0)    cout << " ";
            cout << fixed
                 << setprecision(2)
                 << C[y];
        }
        cout << endl;
        t = 0;
        for(x = 0; x < n; x++)
        {
            k = 0;
            for(y = 0; y < m; y++)
            {
                if(A[x][y] >= C[y])    k++;
            }
            if(k == m)    t++;
        }
        cout << t
             << endl
             << endl;
    }

    return 0;
}
