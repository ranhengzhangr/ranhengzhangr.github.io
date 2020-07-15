```c
//GCC

#include <stdio.h>

int main (void)
{
    int a, b, i, m, n, k, t, f, flag;

    scanf("%d", &n);
    int qser[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &qser[i]);
    }
    scanf("%d", &m);
    for(i = 0; i < m; i++)
    {
        scanf("%d", &f);
        if(f < qser[0]||f > qser[n - 1]){
            printf("Not found!\n");
        }
        else{
            a = 0, b = n - 1, flag = 0;
            while(a <= b&&flag == 0)
            {
                t = (a + b) / 2;
                if(qser[t] == f){
                    flag = 1;
                }
                else{
                    if(qser[t] > f){
                        b = t - 1;
                    }
                    else{
                        a = t + 1;
                    }
                }
            }
            if(flag == 0){
                printf("Not found!\n");
            }
            else{
                printf("%d\n", t);
            }
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

    int a, b, i, n, r, t, k, flag;

    cin >> n;
    int cuof[n];

    for(i = 0; i < n; i++)
    {
        cin >> cuof[i];
    }
    cin >> t;
    for(i = 0; i < t; i++)
    {
        cin >> r;
        if(r < cuof[0]||r > cuof[n - 1]){
            flag = 0;
        }
        else{
            flag = 0;
            a = 0;
            b = n - 1;
            while(a <= b&&flag == 0)
            {
                k = (a + b) / 2;
                if(cuof[k] == r){
                    flag = 1;
                }
                else{
                    if(cuof[k] < r){
                        a = k + 1;
                    }
                    else{
                        b = k - 1;
                    }
                }
            }
        }
        if(flag == 0){
            cout << "Not found!"
                 << endl;
        }
        else{
            cout << k
                 << endl;
        }
    }

    return 0;
}

```
