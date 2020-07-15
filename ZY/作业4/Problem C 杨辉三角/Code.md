```c
//GCC

#include <stdio.h>

int main (void)
{
    int n;

    while(scanf("%d", &n) != EOF )
    {
        int a[100] = {0}, b[100] = {0}, i, t, len = 2;

        a[1] = 1;
        for(i = 0; i < n; i++)
        {
            if (i % 2 == 0){
                for(t = 1; t < len - 1; t ++)
                {
                    printf("%d ", a[t]);
                }
                printf("1\n");
                len++;
                for(t = 1; t <= len; t++)
                {
                    b[t] = a[t - 1] + a[t];
                }
            }
            else{
                for(t = 1; t < len - 1; t ++)
                {
                    printf("%d ", b[t]);
                }
                printf("1\n");
                len++;
                for(t = 1; t <= len; t++)
                {
                    a[t] = b[t - 1] + b[t];
                }
            }
        }
        printf("\n");
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, k;

    while(cin >> n)
    {
        int A[n + 1] = {0}, B[n + 1] = {0};

        A[1] = 1;
        for(i = 0; i < n; i++)
        {
            for(k = 0; k <= i; k++)
            {
                if(k > 0)    cout << " ";
                cout << A[k + 1];
            }
            cout << endl;
            for(k = 0; k <= i + 1; k++)
            {
                B[k + 1] = A[k] + A[k + 1];
            }
            for(k = 0; k <= i + 2; k++)
            {
                A[k] = B[k];
            }
        }
        cout << endl;
    }

    return 0;
}

```
