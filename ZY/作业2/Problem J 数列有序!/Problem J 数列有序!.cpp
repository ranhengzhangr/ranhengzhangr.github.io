#include <iostream>

int main (void)
{
    using namespace std;

    int i, m, n;

    while(cin >> m >> n&&(m != 0||n != 0))
    {
        int A[m + 1];

        for(i = 0; i < m; i++)
        {
            cin >> A[i];
        }
        for(i = m; i > 0; i--)
        {
            A[i] = A[i - 1];
            if(A[i] <= n){
                A[i] = n;
                break;
            }
        }
        for(i = 0; i <= m; i++)
        {
            if(i > 0)    cout << " ";
            cout << A[i];
        }
        cout << endl;
    }

    return 0;
}
