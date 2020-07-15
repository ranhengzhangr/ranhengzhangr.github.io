#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, k;

    while(cin >> n)
    {
        int A[n + 1] = {0}, B[n + 1] = {0};

        A[1] = 1;
        for(i = 0; i < n; i++)
        {
            for(k = 0; k <= i; k++)
            {
                if(k > 0)    cout << " ";
                cout << A[k + 1];
            }
            cout << endl;
            for(k = 0; k <= i + 1; k++)
            {
                B[k + 1] = A[k] + A[k + 1];
            }
            for(k = 0; k <= i + 2; k++)
            {
                A[k] = B[k];
            }
        }
        cout << endl;
    }

    return 0;
}
