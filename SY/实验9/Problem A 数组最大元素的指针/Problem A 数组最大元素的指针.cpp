#include <iostream>

#include <climits>

#define N 1005

int *find_largest(const int a[], int n);

int main (void)
{
    using namespace std;

    int n;
    int a[N], *p, i;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    p = find_largest(a, n);
    cout << *p;

    return 0;
}

int *find_largest(const int a[], int n)
{
    using namespace std;

    int i, k;
    int *j = &k;

    k = a[0];
    for(i = 1; i < n; i++)
    {
        if(k < a[i])    k = a[i];
    }

    return j;
}
