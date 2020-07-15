```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, i, x, y, z;
    float t;

    while (scanf("%d", &n) != EOF)
    {
        if (n == 0){
            continue;
        }
        else{
            x = 0, y = 0, z = 0;
            for (i = 1;i <= n;i++){
                scanf("%f", &t);
                if (t == 0){
                    y++;
                }
                else{
                    if (t > 0){
                        z++;
                    }
                    else{
                        x++;
                    }
                }
            }
            printf("%d %d %d\n", x, y, z);
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

    float i, n, k, o, p, q;

    while(cin >> n&&n != 0)
    {
        o = 0;
        p = 0;
        q = 0;
        for(i = 0; i < n; i++)
        {
            cin >> k;
            if(k == 0){
                o++;
            }
            else{
                if(k > 0){
                    p++;
                }
                else{
                    q++;
                }
            }
        }
        cout << q
             << " "
             << o
             << " "
             << p
             << endl;
    }

    return 0;
}

```
