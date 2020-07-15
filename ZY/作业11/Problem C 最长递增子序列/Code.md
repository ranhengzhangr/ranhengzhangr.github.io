```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, max, flag;

    scanf("%d", &n);
    int QTE[n], PAC[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &QTE[i]);
    }
    max = 0;
    for(PAC[0] = 0; PAC[0] < n; PAC[0]++)
    {
        if(PAC[0] == n - 1){
            break;
        }
        else{
            PAC[1] = PAC[0];
            for(i = 1; i < n&&i > 0; i++)
            {
                flag = 0;
                for(PAC[i]++; PAC[i] < n; PAC[i]++)
                {
                    if(QTE[PAC[i]] > QTE[PAC[i - 1]]){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0){
                    if(i - 1 > max){
                        max = i - 1;
                    }
                    i -= 2;
                }
                else{
                    if(PAC[i] == n - 1){
                        if(i > max){
                            max = i;
                        }
                        i -= 2;
                    }
                    else{
                        PAC[i + 1] = PAC[i];
                    }
                }
            }
        }
    }
    printf("%d", max + 1);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, len;

    cin >> n;
    int A[n], k[n + 1];

    for(i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    len = 0;
    i = 1;
    k[0] = 0;
    k[1] = 0;
    while(i >= 0&&i < n)
    {
        k[i]++;
        if(i > 0){
            while(A[k[i]] <= A[k[i - 1]]&&k[i] < n)    k[i]++;
        }
        if(k[i] == n){
            i--;
        }
        else{
            if(i > len)    len = i;
            k[i + 1] = k[i];
            i++;
        }
    }
    cout << ++len
         << endl;

    return 0;
}

```
