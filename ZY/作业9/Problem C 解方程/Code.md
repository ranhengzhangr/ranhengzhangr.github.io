```c
//GCC

#include <stdio.h>

#include <math.h>

int main (void)
{
    float a, b, c, x1, x2;

    scanf("%f %f %f", &a, &b, &c);
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    if(x1 > x2){
        printf("%.5f\n", x1);
    }
    else{
        printf("%.5f\n", x2);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

#include <cmath>

int main (void)
{
    using namespace std;

    float a, b, c, x1, x2;

    cin >> a
        >> b
        >> c;
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    if(x1 > x2){
        cout << fixed
             << setprecision(5)
             << x1;
    }
    else{
        cout << fixed
             << setprecision(5)
             << x2;
    }
    cout << endl;

    return 0;
}

```
