#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, k;

    cin >> n;
    int A[n];

    k = 0;
    for(i = 0; i < n; i++)
    {
        cin >> A[i];
        if(A[i] > A[k])    k = i;
    }
    cout << A[k]
         << " "
         << k
         << endl;

    return 0;
}
