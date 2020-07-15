```c
//GCC

#include <stdio.h>

int main (void)
{
    int t = 1;
    double n, sum = 1, mote = 1;

    scanf("%lf", &n);
    if(n >= 0&&n <= 5){
        while(mote < -0.00001||mote > 0.00001)
        {
            mote = (mote * n) / t;
            sum += mote;
            t++;
        }
        printf("%.4f\n", sum);
    }
    else{
        ;
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

double absolute(double n);

int main (void)
{
    using namespace std;

    int i;
    double n, k, sum;

    cin >> n;
    i = 1;
    k = 1;
    sum = 1;
    while(absolute(k) >= 0.00001)
    {
        k *= n / i;
        sum += k;
        i++;
    }
    cout << fixed
         << setprecision(4)
         << sum;

    return 0;
}

double absolute(double n)
{
    using namespace std;

    if(n < 0)    return -n;
    else    return n;
}

```
