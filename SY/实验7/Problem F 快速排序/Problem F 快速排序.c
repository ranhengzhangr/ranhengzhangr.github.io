#include <stdio.h>

void quick_sort(int a[], int p, int r)
{
    int q;

    if (p >= r) return;
    q = split(a, p, r);
    quick_sort(a, p, q - 1);
    quick_sort(a, q + 1, r);
}

int split(int a[], int p, int r)
{
    int part = a[p];

    for (;;)
    {
        while (p < r && part <= a[r])
            r--;
        if (p>=r)
            break;
        a[p++] = a[r];
        while (p < r && a[p] <= part)
            p++;
        if (p>=r)
            break;
        a[r--] = a[p];
    }
    a[r] = part;

    return r;
}

int main()
{
    int n;

    scanf("%d",&n);
    int a[n], i;

    for (i = 0;i < n; i++)
        scanf("%d",&a[i]);
    quick_sort(a, 0, n - 1);
    for (i = 0; i < n - 1; i++)
        printf("%d ",a[i]);
        printf("%d",a[i]);
        printf("\n");

    return 0;
}
