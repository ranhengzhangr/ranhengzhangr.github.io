```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, h, m;

    scanf("%d", &n);
    h = n / 100;
    m = n % 100;
    h -= 8;
    if(h > 23){
        h -= 24;
    }
    else{
        if(h < 0){
            h += 24;
        }
    }
    if(h == 0){
        printf("%d\n", m);
    }
    else{
        printf("%d", h);
        if(m < 10){
            printf("0");
        }
        printf("%d\n", m);
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

    int n;

    cin >> n;
    n -= 800;
    if(n < 0)    n += 2400;
    cout << n
         << endl;

    return 0;
}

```
