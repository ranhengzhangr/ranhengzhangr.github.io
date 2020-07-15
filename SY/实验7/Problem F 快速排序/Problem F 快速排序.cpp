#include <iostream>

void quick_sort(int a[], int i, int j);

void quick_sort(int a[], int i, int j)
{
    using namespace std;

    int p, q, k, mote;

    if(i >= j)    return;
    p = i;
    q = j;
    k = i;
    for(; ; )
    {
        while(q > p&&a[q] >= a[k])    q--;
        if(p >= q)    break;
        while(p < q&&a[p] <= a[k])    p++;
        if(p >= q)    break;
        mote = a[q], a[q] = a[p], a[p] = mote;
    }
    mote = a[k], a[k] = a[p], a[p] = mote;
    quick_sort(a, i, k - 1);
    quick_sort(a, k + 1, j);
}

int main (void)
{
    using namespace std;

    int i, n;

    cin >> n;
    int a[n];

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quick_sort(a, 0, n - 1);
    for(i = 0; i < n; i++)
    {
        if(i > 0)    cout << " ";
        cout << a[i];
    }
    cout << endl;

    return 0;
}
