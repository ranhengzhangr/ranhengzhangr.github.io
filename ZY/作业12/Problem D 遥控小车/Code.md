```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, t, x, y, v, flag;
    char ch, dec;

    while(scanf("%d", &n) != EOF&&n != 0)
    {
        v = 0, x = 0, y = 0, flag = 1, dec = 'U';
        for(i = 0; i < n; i++)
        {
            scanf("%d", &t);
            while(v < t)
            {
                switch(dec)
                {
                    case 'U': y += flag; break;
                    case 'D': y -= flag; break;
                    case 'L': x -= flag; break;
                    case 'R': x += flag; break;
                }
                v++;
            }
            if(x < 0||x > 50){
                if(x < 0){
                    x = 0;
                }
                else{
                    x = 50;
                }
            }
            if(y < 0||y > 50){
                if(y < 0){
                    y = 0;
                }
                else{
                    y = 50;
                }
            }
            getchar();
            ch = getchar();
            if(ch == 'A'){
                flag = 3 - flag;
            }
            else{
                dec = ch;
            }
        }
        while(v < 50)
        {
            switch(dec)
            {
                case 'U': y += flag; break;
                case 'D': y -= flag; break;
                case 'L': x -= flag; break;
                case 'R': x += flag; break;
            }
            v++;
        }
        if(x < 0||x > 50){
            if(x < 0){
                x = 0;
            }
            else{
                x = 50;
            }
        }
        if(y < 0||y > 50){
            if(y < 0){
                y = 0;
            }
            else{
                y = 50;
            }
        }
        printf("%d %d\n", x, y);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, k, t, v, x, y;
    char ch, dec;

    while(cin >> n&&n != 0)
    {
        x = 0;
        y = 0;
        v = 1;
        dec = 'U';
        t = 0;
        for(i = 0; i < n; i++)
        {
            cin >> k;
            cin.get();
            cin.get(ch);
            for(; t < k; t++)
            {
                switch(dec)
                {
                    case 'U': y += v; break;
                    case 'D': y -= v; break;
                    case 'R': x += v; break;
                    case 'L': x -= v; break;
                }
            }
            if(x < 0)    x = 0;
            else if(x > 50)    x = 50;
            if(y < 0)    y = 0;
            else if(y > 50)    y = 50;
            if(ch == 'A')    v = 3 - v;
            else    dec = ch;
        }
        for(; t < 50; t++)
        {
            switch(dec)
            {
                case 'U': y += v; break;
                case 'D': y -= v; break;
                case 'R': x += v; break;
                case 'L': x -= v; break;
            }
        }
        if(x < 0)    x = 0;
        else if(x > 50)    x = 50;
        if(y < 0)    y = 0;
        else if(y > 50)    y = 50;
        cout << x
             << " "
             << y
             << endl;
    }

    return 0;
}

```
