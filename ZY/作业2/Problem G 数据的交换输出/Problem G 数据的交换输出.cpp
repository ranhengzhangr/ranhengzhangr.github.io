#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, k, mote;

    while(cin >> n&&n != 0)
    {
        int A[n];

        for(i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        k = 0;
        for(i = 1; i < n; i++)
        {
            if(A[k] > A[i])    k = i;
        }
        mote = A[0], A[0] = A[k], A[k] = mote;
        for(i = 0; i < n; i++)
        {
            if(i > 0)    cout << " ";
            cout << A[i];
        }
        cout << endl;
    }

    return 0;
}
