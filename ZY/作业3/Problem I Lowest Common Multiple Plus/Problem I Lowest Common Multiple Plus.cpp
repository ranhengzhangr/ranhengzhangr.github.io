#include <iostream>

int multipy(int A[], int k);

int main (void)
{
    using namespace std;

    int i, n, t;

    while(cin >> n)
    {
        int A[n];

        for(i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        t = multipy(A, n - 1);
        cout << t
             << endl;
    }

    return 0;
}

int multipy(int A[], int k)
{
    using namespace std;

    int p, q, n, mote;

    if(k == 0)    return A[k];
    if(A[k] > multipy(A, k - 1)){
        p = A[k];
        q = multipy(A, k - 1);
    }
    else{
        p = multipy(A, k - 1);
        q = A[k];
    }
    while(q > 0)
    {
        p %= q;
        if(p < q){
            mote = p;
            p = q;
            q = mote;
        }
        n = p;
    }
    n = A[k] * multipy(A, k - 1) / n;

    return n;
}
