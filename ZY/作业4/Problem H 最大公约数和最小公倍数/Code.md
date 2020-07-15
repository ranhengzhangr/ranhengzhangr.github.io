```c
//GCC

#include <stdio.h>

int main (void)
{
    int m, n, x, y, max, min, mote;

    scanf("%d %d", &m, &n);
    if(m > n){
        mote = m, m = n, n = mote;
    }
    min = n, x = n, y = m;
    while(min % m != 0)
    {
        min += n;
    }
    while(m % y != 0||n % y != 0)
    {
        if(x > y){
            mote = x, x = y, y = mote;
        }
        y %= x;
    }
    max = y;
    printf("%d %d\n", max, min);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int a, b, m, n, mote, max_num, min_num;

    cin >> m >> n;
    if(m > n){
        a = m;
        b = n;
    }
    else{
        a = n;
        b = m;
    }
    while(b > 0)
    {
        a %= b;
        if(a < b){
            mote = a;
            a = b;
            b = mote;
        }
        max_num = a;
    }
    min_num = m * n / max_num;
    cout << max_num
         << " "
         << min_num
         << endl;

    return 0;
}

```
