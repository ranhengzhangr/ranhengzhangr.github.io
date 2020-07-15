#include <iostream>

#define MAX 100000

void finder(int A[], int m, int k);

int main (void)
{
    using namespace std;

    int A[MAX], i, m, n, k;

    cin >> m;
    for(i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        finder(A, m, k);
    }

    return 0;
}

void finder(int A[], int m, int k)
{
    using namespace std;

    int p, q, t, n;

    if(k < A[0]||k > A[m - 1]){
        cout << "Not found!";
    }
    else{
        n = -1;
        p = 0;
        q = m - 1;
        while(p <= q)
        {
            t = (p + q) / 2;
            if(A[t] == k){
                n = t;
                break;
            }
            else{
                if(A[t] > k)    q = t - 1;
                else    p = t + 1;
            }
        }
        if(n == -1)    cout << "Not found!";
        else    cout << n;
    }
    cout << endl;
}
