```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, i, t;
    char ch = 'A';

    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
    {
        t = 1;
        while (t <= (n - i))
        {
            printf (" ");
            t++;
        }
        while ((t > (n - i))&&(t < (n + i)))
        {
            printf ("%c", toupper(ch+i-1));
            t++;
        }
        while (t = n + i)
        {
            printf("\n");
            break;
        }
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

    int i, k, n;
    char ch;

    cin >> n;
    ch = 'A';
    for(i = 0; i < n; i++)
    {
        for(k = 0; k < n + i; k++)
        {
            if(k < n - i - 1)
                cout << " ";
            else
                cout << ch;
        }
        cout << endl;
        ch++;
    }

    return 0;
}

```
