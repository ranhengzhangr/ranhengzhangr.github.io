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
