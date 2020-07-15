#include <iostream>

void quick_sort(int A[], int j, int k);

int main (void)
{
    using namespace std;

    int i, n;

    cin >> n;
    int A[n];

    for(i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    quick_sort(A, 0, n - 1);
    for(i = 0; i < n; i++)
    {
        if(i > 0)    cout << " ";
        cout << A[i];
    }
    cout << endl;

    return 0;
}

void quick_sort(int A[], int j, int k)
{
    using namespace std;

    int i, p, q, mote;

    if(j > k)    return;
    p = j;
    q = k;
    for(; ; )
    {
        while(A[p] <= A[k]&&p < q)
        {
            p++;
        }
        if(p >= q)    break;
        while(A[q] >= A[k]&&p < q)
        {
            q--;
        }
        if(p >= q)    break;
        mote = A[p];
        A[p] = A[q];
        A[q] = mote;
    }
    mote = A[k];
    A[k] = A[q];
    A[q] = mote;
    quick_sort(A, p + 1, k);
    quick_sort(A, j, p - 1);
}
