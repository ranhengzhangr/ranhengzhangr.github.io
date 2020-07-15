```c
//GCC

#include <stdio.h>

#include <stdlib.h>

int main(void)
{
    int i, k, n, sum, hell;
    char ch;

    scanf("%d %c", &sum, &ch);
    for(n = 0; (n + 1) * (n + 1) * 2 - 1 <= sum; n++);
    hell = sum;
    for(k = 1; k < n * 2; k++)
    {
        for(i = 1; i < n - abs(n - k); i++)
        {
            putchar(' ');
        }
        for(i = 0; i < abs(n - k) * 2 + 1; i++)
        {
            putchar(ch);
        }
        printf("\n");
        hell -= abs(n - k) * 2 + 1;
    }
    printf("%d\n", hell);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int i, k, t, n;
    char ch;

    cin >> n;
    cin.get();
    ch = cin.get();
    for(k = 0; (k + 1) * (k + 1) * 2 - 1 <= n; k++);
    for(i = 0; i < k * 2 - 1; i++)
    {
        for(t = 0; t < k + abs(k - i - 1); t++)
        {
            if(t < k - abs(k - i - 1) - 1)    cout.put(' ');
            else    cout.put(ch);
        }
        cout << endl;
        n -= abs(k - i - 1) * 2 + 1;
    }
    cout << n
         << endl;

    return 0;
}

```
