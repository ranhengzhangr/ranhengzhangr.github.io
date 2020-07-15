#include <iostream>

void quick_sort(int A[], int B[], int i, int j);

int main (void)
{
    using namespace std;

    int i, n;

    while(cin >> n&&n != 0)
    {
        int A[n], B[n];

        for(i = 0; i < n; i++)
        {
            cin >> A[i];
            if(A[i] < 0)    B[i] = -A[i];
            else    B[i] = A[i];
        }
        quick_sort(A, B, 0, n - 1);
        for(i = 0; i < n; i++)
        {
            if(i > 0)    cout << " ";
            cout << A[i];
        }
        cout << endl;
    }

    return 0;
}

void quick_sort(int A[], int B[], int i, int j)
{
    using namespace std;

    int p, q, k, mote;

    if(j <= i)    return;
    for(k = i, p = i, q = j; ; )
    {
        while(B[q] < B[k])    q--;
        if(q <= p)    break;
        while(B[p] < B[k])    p++;
        if(q <= p)    break;
        mote = B[p], B[p] = B[q], B[q] = mote;
        mote = A[p], A[p] = A[q], A[q] = mote;
    }
    mote = B[p], B[p] = B[k], B[k] = mote;
    mote = A[p], A[p] = A[k], A[k] = mote;
    quick_sort(A, B, i, q - 1);
    quick_sort(A, B, q + 1, j);
}
