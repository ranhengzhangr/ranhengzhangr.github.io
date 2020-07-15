```c
//GCC

#include <stdio.h>

#define PI 3.1415927

int main(void)
{
  double r, v;

  while(scanf("%lf", &r) != EOF)
  {
      v = r * r * r * PI * 4.00 / 3.00;
      printf ("%.3lf\n", v);
  }

  return 0;

}

```

```c++
//G++

#include <iostream>

#include <iomanip>

#define PI 3.1415927

int main (void)
{
    using namespace std;

    double r, v;

    while(cin >> r)
    {
        v = 4.0 / 3 * r * r * r * PI;
        cout << fixed
             << setprecision(3)
             << v
             << endl;
    }

    return 0;
}

```
