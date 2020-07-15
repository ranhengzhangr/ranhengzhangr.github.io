```c
//GCC

#include <stdio.h>

int main (void)
{
    int d, e, i, n, s, w;

    scanf("%d %d", &d, &w);
    n = d + w - 1;
    for (i = 1; i < w; i++)
    {
        printf ("   ");
    }
    for (;i <= n;i++)
    {
        s = i - w + 1;
        e = i % 7;
        if (e == 0){
            printf("%3d\n", s);
        }
        else{
            printf("%3d", s);
        }
    }
    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, k, n;

    cin >> n >> k;
    for(i = 1; i < n + k; i++)
    {
        if(i < k)
            cout << "   ";
        else
            cout << setw(3)
                 << right
                 << i - k + 1;
        if(i % 7 == 0&&i + 1 < n + k)
            cout << endl;
    }
    cout << endl;

    return 0;
}

```
