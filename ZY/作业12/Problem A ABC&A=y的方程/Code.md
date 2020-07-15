```c
//GCC

#include <stdio.h>

int main (void)
{
    int y, i1, i2, i3, flag;

    scanf("%d", &y);
    flag = 0;
    for(i1 = 1; i1 < 10&&flag == 0; i1++)
    {
        for(i2 = 0; i2 < 10&&flag == 0; i2++)
        {
            for(i3 = 0; i3 < 10&&flag == 0; i3++)
            {
                if((i1 * 10 + i2) * i3 + i1 == y){
                    flag = 1;
                }
            }
        }
    }
    printf("%d %d %d", i1 - 1, i2 - 1, i3 - 1);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int A, B, C, y, k;

    cin >> y;
    k = 0;
    for(A = 1; A < 10&&k == 0; A++)
    {
        for(B = 0; B < 10&&k == 0; B++)
        {
            for(C = 0; C < 10&&k == 0; C++)
            {
                if((A * 10 + B) * C + A == y)    k = 1;
            }
        }
    }
    cout << A - 1
         << " "
         << B - 1
         << " "
         << C - 1;

    return 0;
}

```
