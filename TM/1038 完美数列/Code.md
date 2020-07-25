```c
//GCC

#include <stdio.h>

void quick_sort(int A[], int p, int q);

int main (void)
{
    int i, p, N, min, max, len = 0;

    scanf("%d %d", &N, &p);

    int A[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
	quick_sort(A, 0, N - 1);
	for(min = 0; min < N - 1; min++)
	{
		for(max = min + 1; max < N; max++)
		{
			if(A[min] * p >= A[max]&&max - min + 1 > len)    len = max - min + 1;
		}
	}
	printf("%d\n", len);

	return 0;
}

void quick_sort(int A[], int p, int q)
{
	if(!(p < q))    return;

    int a, b, k, n;

	a = p;
	b = q;
	for(k = q, q--; ; )
	{
		while(A[p] <= A[k]&&p < q)    p++;
		while(A[q] >= A[k]&&p < q)    q--;
		if(p == q){
			n = A[k];
			A[k] = A[p];
			A[p] = n;
			break;
		}
		else{
			n = A[p];
			A[p] = A[q];
			A[q] = n;
		}
	}
	quick_sort(A, a, p - 1);
	quick_sort(A, q + 1, b);
}

```

```c++
//G++

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

```
