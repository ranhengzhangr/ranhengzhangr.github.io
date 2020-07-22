```c
//GCC

#include <stdio.h>

#include <string.h>

int main (void)
{
    int i, n, t, k;
    char str[33];

    scanf("%d\n", &n);
    for(i = 0; i < n; i++)
    {
        k = 0;
        scanf("%s", &str);
        for(t = 0; t < strlen(str); t++)
        {
            k *= 2;
            k += str[t] - 48;
        }
        printf("%d\n", k);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cstring>

int changer(char num[]);

int main (void)
{
    using namespace std;

    int i, n;
    char number[33];

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> number;
        cout << changer(number)
             << endl;
    }

    return 0;
}

int changer(char num[])
{
    using namespace std;

    int i, n = 0;

    for(i = 0; i < strlen(num); i++)
    {
        n *= 2;
        n += num[i] - 48;
    }

    return n;
}

```
