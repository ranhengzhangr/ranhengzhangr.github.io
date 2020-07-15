```c
//GCC

#include <stdio.h>

int main (void)
{
    int n, i, l, t, sum;
    char ch;

    scanf("%d\n", &n);
    for(i = 0; i < n; i++)
    {
        sum = 0;
        while((ch = getchar()) != '\n')
        {
            if(ch < 0){
                sum++;
            }
        }
        printf("%d\n", sum / 3);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <string>

#include <cstring>

int main (void)
{
    using namespace std;

    int i, n, k, sum;
    string str;

    cin >> n;
    cin.get();
    for(i = 0; i < n; i++)
    {
        getline(cin, str);
        sum = 0;
        for(k = 0; k < str.size(); k++)
        {
            if(str[k] < 0)    sum++;
        }
        cout << sum / 3
             << endl;
    }

    return 0;
}

```
