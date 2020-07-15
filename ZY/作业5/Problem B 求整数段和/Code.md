```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, m, n, u = 1, sum = 0;

    scanf("%d %d", &m, &n);
    for(i = m; i < n; i++)
    {
        sum += i;
        if(i == 0){
            printf("    0");
        }
        else{
            printf("%5.d", i);
        }
        if(u % 5 == 0){
            printf("\n");
        }
        u++;
    }
    sum += n;
    printf("%5.d\n", n);
    printf("Sum = %d", sum);

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

    int i, a, b, sum;

    cin >> a
        >> b;
    sum = 0;
    for(i = 0; i <= b - a; i++)
    {
        if(i % 5 == 0&&i > 0)    cout << endl;
        cout << setw(5)
             << right
             << i + a;
        sum += i + a;
    }
    cout << endl
         << endl
         << "Sum = "
         << sum
         << endl;

    return 0;
}

```
