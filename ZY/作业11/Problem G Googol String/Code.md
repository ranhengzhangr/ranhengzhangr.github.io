```c
//GCC

#include <stdio.h>

int main (void)
{
    long long int k, p, len;
    int i, t, u, flag;

    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%lld", &k);

        flag = 0;
        p = k;
        while(p > 1)
        {
            flag = 1 - flag;
            len = 0;
            while(len < p)
            {
                len = 1 + len * 2;
            }
            if(k == (len + 1) / 2){
                flag = 1 - flag;
                break;
            }
            else{
                p = len / 2;
                if(k > (len + 1) / 2){
                    k = len - k + 1;
                }
                else{
                    flag = 1 - flag;
                }
            }
        }
        printf("Case #%d: %d\n", i + 1, flag);
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

    long long int i, n, k, t, flag;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> k;
        t = 0;
        while(t < k)
        {
            t = t * 2 + 1;
        }
        flag = 0;
        while(t > 1)
        {
            if(k == (t + 1) / 2){
                break;
            }
            else{
                if(k < (t + 1) / 2){
                    ;
                }
                else{
                    flag = 1 - flag;
                    k = t - k + 1;
                }
                t = (t - 1) / 2;
            }
        }
        cout << "Case #"
             << i + 1
             << ": "
             << flag
             << endl;
    }

    return 0;
}

```
