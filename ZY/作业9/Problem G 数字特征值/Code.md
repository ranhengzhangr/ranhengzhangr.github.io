```c
//GCC

#include <stdio.h>

int main (void)
{
    int a[7] = {0}, i, n, u, bit, exp, flag_bit, flag_u, sum;

    scanf("%d", &n);
    for(i = 0, u = 1; n > 0; i++, u++)
    {
        bit = n % 10;
        n /= 10;
        flag_bit = bit % 2;
        flag_u = u % 2;
        a[i] = 1 - (flag_bit + flag_u) % 2;
    }
    for(exp = 1, sum = 0, i = 0; i < 7; i++, exp *= 2)
    {
        sum += exp * a[i];
    }
    printf("%d\n", sum);

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cstring>

void strrve(char str[]);

int main (void)
{
    using namespace std;

    int i, n, t;
    char str[10];

    cin >> str;
    strrve(str);
    n = 0;
    t = 1;
    for(i = 0; i < strlen(str); i++)
    {
        n += (str[i] % 2 + i % 2) % 2 * t;
        t *= 2;
    }
    cout << n
         << endl;

    return 0;
}

void strrve(char str[])
{
    using namespace std;

    int i;
    char ch;

    for(i = 0; i < strlen(str) / 2; i++)
    {
        ch = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = ch;
    }
}

```
