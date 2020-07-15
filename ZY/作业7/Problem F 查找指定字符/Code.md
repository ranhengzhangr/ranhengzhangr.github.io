```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, u, len;
    char ta, ch, wd[80];

    scanf("%c\n", &ta);
    u = 0, len = 0;
    ch = getchar();
    for(i = 0; ch != '\n'; i++)
    {
        wd[i] = ch;
        len++;
        ch = getchar();
    }
    for(i = 0; i < len; i++)
    {
        if(wd[i] == ta){
            n = i;
            u = 1;
        }
    }
    if(u == 0){
        printf("Not Found");
    }
    else{
        printf("index = %d", n);
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

    int i, k;
    char ch;
    string str;

    cin.get(ch);
    cin.get();
    cin >> str;
    for(i = 0; i < str.size(); i++)
    {
        if(str[i] == ch)    k = i;
    }
    cout << "index = "
         << k
         << endl;

    return 0;
}

```
