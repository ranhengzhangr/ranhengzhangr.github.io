```c
//GCC

#include <stdio.h>

int main (void)
{
    int n;

    while(scanf("%d\n", &n) != EOF )
    {
        if(n == 0){
            ;
        }
        else{
            int i, a[n], in1 = 0, in2 = 0, in5 = 0, in10 = 0, in50 = 0, in100 = 0, sum;

            for(i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
                in100 += a[i] / 100, a[i] %= 100;
                in50 += a[i] / 50, a[i] %= 50;
                in10 += a[i] / 10, a[i] %= 10;
                in5 += a[i] / 5, a[i] %= 5;
                in2 += a[i] / 2, in1 += a[i] % 2;
            }
            sum = in1 + in2 + in5 + in10 + in50 + in100;
            printf("%d\n", sum);
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

    int i, n, k, sum;

    while(cin >> n&&n != 0)
    {
        sum = 0;
        for(i = 0; i < n; i++)
        {
            cin >> k;
            sum += k / 100;
            k %= 100;
            sum += k / 50;
            k %= 50;
            sum += k /10;
            k %= 10;
            sum += k / 5;
            k %= 5;
            sum += k / 2;
            sum += k % 2;
        }
        cout << sum
             << endl;
    }

    return 0;
}

```
