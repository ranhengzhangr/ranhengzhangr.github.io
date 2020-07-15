#include <stdio.h>

#include <limits.h>

#define N 1005

int *find_largest(const int a[], int n);

int main (void)
{
    int n;
    int a[N], *p, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = find_largest(a, n);
    printf("%d", *p);

    return 0;
}

int *find_largest(const int a[], int n)
{
    int i;
	int *j = &a[0];

	for(i = 1; i < n; i++)
	{
		if(a[i] > *j)    *j = a[i];
	}

	return j;
}
