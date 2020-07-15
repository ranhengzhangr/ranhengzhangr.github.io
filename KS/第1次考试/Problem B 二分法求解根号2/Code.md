```c
//GCC

#include <stdio.h>

int main (void)
{
    double eps, left = 1, right = 2, mid, Fx;

    scanf("%lf", &eps);
    while(right - left >= eps)
    {
        mid = (right + left) / 2;
        Fx = mid * mid;
        if(Fx > 2){
            right = mid;
        }
        else{
            left = mid;
        }
    }
    printf("%.6f", mid);

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    double eps, mid, right, left;

    cin >> eps;
    left = 1;
    right = 2;
    while(right - left >= eps)
    {
        mid = (right + left) / 2;
        if(mid * mid > 2)    right = mid;
        else    left = mid;
    }
    cout << fixed
         << setprecision(6)
         << mid
         << endl;

    return 0;
}

```
