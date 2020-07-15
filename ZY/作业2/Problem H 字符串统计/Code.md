```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, r, u;

    scanf("%d\n", &n);
    u = n;

    int a[n];

    while(n != 0)
    {
        int t = 0;

        while((r = getchar()) != '\n')
        {
            if(r > 47&&r < 58){
                t++;
            }
        }
        n--;
        a[n] = t;
    }
    for (i = 1; i <= u; i++)
    {
        printf("%d\n", a[u - i]);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cctype>

int main (void)
{
    using namespace std;

    int i, n, sum;
    char ch;

    cin >> n;
    for(cin.get(), i = 0; i < n; i++)
    {
        sum = 0;
        while((ch = cin.get()) != '\n')
        {
            if(isdigit(ch))    sum++;
        }
        cout << sum
             << endl;
    }

    return 0;
}

```
