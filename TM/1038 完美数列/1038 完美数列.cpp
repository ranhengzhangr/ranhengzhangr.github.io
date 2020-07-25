#include <iostream>

void quick_sorts(int A[], const int p, const int q);

int bank(const int A[], const int T, const int n);

int main (void)
{
    using namespace std;

    int i, N, p;

    cin >> N
        >> p;

    int A[N];

    for(i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    quick_sorts(A, 0, N - 1);
    cout << bank(A, N, p)
         << endl;

    return 0;
}

void quick_sorts(int A[], const int p, const int q)
{
    using namespace std;

    if(!(p < q))    return;

    int a, b, k, n;

    for(a = p, b = q - 1, k = q; ; )
    {
        while(A[a] <= A[k]&&a < b)    a++;
        while(A[b] >= A[k]&&a < b)    b--;
        if(a == b){
            n = A[k];
            A[k] = A[a];
            A[a] = n;
            break;
        }
        else{
            n = A[a];
            A[a] = A[b];
            A[b] = n;
        }
    }
    quick_sorts(A, p, a - 1);
    quick_sorts(A, b + 1, q);
}

int bank(const int A[], const int T, const int n)
{
    using namespace std;

    int min, max, len = 0;

    for(min = 0; min < T - 1; min++)
    {
        for(max = min + 1; max < T; max++)
        {
            if(A[min] * n >= A[max]&&max - min + 1 > len)    len = max - min + 1;
        }
    }

    return len;
}
