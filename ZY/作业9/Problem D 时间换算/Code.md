```c
//GCC

#include <stdio.h>

int main (void)
{
    int t, sec, hr;

    scanf("%d", &t);
    if(t >= 0&&t <= 2359){
        sec = t % 100;
        hr = t / 100;
        hr -= 8;
        if(hr < 0){
            hr += 24;
        }
        if(hr != 0){
            printf("%d", hr);
            if(sec < 10){
                printf("0%d\n", sec);
            }
            else{
                printf("%d\n", sec);
            }
        }
        else{
            printf("%d\n", sec);
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

    int n;

    cin >> n;
    n -= 800;
    while(n < 0)    n += 2400;
    while(n > 2359)    n -= 2400;
    cout << n
         << endl;

    return 0;
}

```
