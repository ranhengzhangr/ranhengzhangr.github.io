#include <iostream>

#include <iomanip>

void quick_sort(int A[], int len);

int main (void)
{
    using namespace std;

    int i, n;
    float t;

    while(cin >> n)
    {
        if(n <= 100&&n > 2){
            int A[n];

            for(i = 0; i < n; i++)
            {
                cin >> A[i];
            }
            quick_sort(A, n);
            t = 0;
            for(i = 1; i < n - 1; i++)
            {
                t += A[i];
            }
            t /= n - 2;
            cout << fixed
                 << setprecision(2)
                 << t
                 << endl;
            }
    }

    return 0;
}

void quick_sort(int A[], int len)
{
    using namespace std;

    int i, t, mote;

    if(len == 1)    return;
    t = 0;
    for(i = 1; i < len; i++)
    {
        if(A[i] > A[t]){
            t = i;
        }
    }
    mote = A[len - 1], A[len - 1] = A[t], A[t] = mote;
    quick_sort(A, len - 1);
}
