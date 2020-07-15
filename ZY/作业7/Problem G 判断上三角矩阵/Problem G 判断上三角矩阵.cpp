#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, k, x, y, flag;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        int A[k][k];

        for(x = 0; x < k; x++)
        {
            for(y = 0; y < k; y++)
            {
                cin >> A[x][y];
            }
        }
        flag = 0;
        for(x = 1; x < k; x++)
        {
            for(y = 0; y < x; y++)
            {
                if(A[x][y] != 0)    flag = 1;
            }
        }
        if(flag == 0)    cout << "YES";
        else    cout << "NO";
        cout << endl;
    }

    return 0;
}
