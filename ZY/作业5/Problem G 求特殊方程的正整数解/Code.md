```c
//GCC

#include <stdio.h>

#include <math.h>

int main (void)
{
    int i = 0, n, t, x, y;

    scanf("%d", &n);
    if(x <= y){
        t = sqrt(n);
        for(x = 0; x < n; x++)
        {
            for(y = x + 1; y <= n; y++)
            {
                if(x * x + y * y == n){
                    printf("%d %d\n", x, y);
                    i++;
                }
            }
        }
        if(i == 0){
            printf("No Solution");
        }
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cmath>

int main (void)
{
    using namespace std;

    int n, t, x, y;

    cin >> n;
    t = sqrt(n / 2);
    for(x = 0; x < t; x++)
    {
        y = sqrt(n - x * x);
        if(x * x + y * y == n){
            cout << x
                 << " "
                 << y
                 << endl;
        }
    }

    return 0;
}

```
