```c
//GCC

#include <stdio.h>

#include <math.h>

int main (void)
{
    int a[4], i, n, t;

    while(scanf("%d", &n) != EOF)
    {
        t = pow(2, 32 - n) - 2;
        for(i = 0; i < 4; i++)
        {
            if(n >= 8){
                a[i] = 255;
                n -= 8;
            }
            else{
                switch(n)
                {
                    case 0:a[i] = 0;break;
                    case 1:a[i] = 128;break;
                    case 2:a[i] = 192;break;
                    case 3:a[i] = 224;break;
                    case 4:a[i] = 240;break;
                    case 5:a[i] = 248;break;
                    case 6:a[i] = 252;break;
                    case 7:a[i] = 254;break;
                }
                n = 0;
            }
        }
        printf("%d.%d.%d.%d %d\n", a[0], a[1], a[2], a[3], t);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cmath>

int address(int n);

int main (void)
{
    using namespace std;

    int i, n, k;

    while(cin >> n)
    {
        i = 0;
        k = pow(2, 32 - n) - 2;
        while(n >= 8)
        {
            if(i > 0)    cout << ".";
            cout << "255";
            i++;
            n -= 8;
        }
        for(; i < 4; i++)
        {
            if(i > 0)    cout << ".";
            cout << address(n);
            n = 0;
        }
        cout << " "
             << k
             << endl;
    }

    return 0;
}

int address(int n)
{
    using namespace std;

    int i, k;

    k = 0;
    for(i = 0; i < n; i++)
    {
        k += pow(2, i);
    }

    return k;
}

```
