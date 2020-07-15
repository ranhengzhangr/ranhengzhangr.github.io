```c
//GCC

#include <stdio.h>

int power(int x, int n);

int main()
{
    int x, n;

    scanf("%d %d", &x, &n);
    printf("%d\n", power(x, n));

    return 0;
}

int power(int x,int n)
{
    if (n == 0) return 1;
    int temp;

    temp = power(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 1) temp *= x;
    return temp;
}

```

```c++
//G++

#include <iostream>

int power(int x, int n);

int main (void)
{
    using namespace std;

    int x, n;

    cin >> x
        >> n;
    cout << power(x, n)
         << endl;

    return 0;
}

int power(int x, int n)
{
    if(n == 1)    return x;
    if(n % 2 == 0){
        return power(x, n / 2) * power(x, n / 2);
    }
    else{
        return x * power(x, n - 1);
    }
}

```
