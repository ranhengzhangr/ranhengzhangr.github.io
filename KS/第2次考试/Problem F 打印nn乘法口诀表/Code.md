```c
//GCC

#include <stdio.h>

int main (void)
{
    int x, y, n;

    scanf("%d", &n);

    for(x = 1; x <= n; x++)
    {
        for(y = 0; y < x; y++)
        {
            if(y > 0){
                if(x * y < 10)    putchar(' ');
                printf("  ");
            }
            printf("%d*%d=%d", x, y + 1, x * (y + 1));
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

    int x, y, n;

    cin >> n;
    for(x = 1; x <= n; x++)
    {
        for(y = 0; y < x; y++)
        {
            if(y > 0){
                cout << "  ";
                if(x * y < 10)    cout.put(' ');
            }
            cout << x
                 << '*'
                 << y + 1
                 << '='
                 << x * (y + 1);
        }
        cout << endl;
    }

    return 0;
}

```
