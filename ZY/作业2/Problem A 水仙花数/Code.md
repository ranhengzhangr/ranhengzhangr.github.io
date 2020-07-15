```c
//GCC

#include <stdio.h>

int main (void)
{
    int a, i, m, n, t, x, y, z;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        if (100 <= m <= n <= 999){
            t = 0;
            for (i = m;i <= n;i++)
            {
                x = i / 100;
                m = i % 100;
                y = m / 10;
                z = m % 10;
                a = x * x * x + y * y * y + z * z * z;
                if (i == a){
                    while (t > 0)
                    {
                        printf(" ");
                        break;
                    }
                    t++;
                    printf("%d", i);
                }
                else{
                    continue;
                }
            }
            while (t == 0)
            {
                printf("no");
                break;
            }
            printf("\n");
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

    int a, b, c, i, m, n, k, sum;

    while(cin >> m >> n)
    {
        if(100 <= m&&m <= n&&n <= 999){
            sum = 0;
            for(i = m; i <= n; i++)
            {
                k = i;
                c = k % 10;
                k /= 10;
                b = k % 10;
                a = k / 10;
                if(a * a * a + b * b * b + c * c * c == i){
                    if(sum > 0)    cout << " ";
                    cout << i;
                    sum++;
                }
            }
            if(sum == 0)    cout << "no";
            cout << endl;
        }
    }

    return 0;
}

```
