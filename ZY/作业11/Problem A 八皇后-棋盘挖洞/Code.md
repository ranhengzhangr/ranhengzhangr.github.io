```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, k[9], t, x, y;
    char board[8][9];

    for(i = 0; i < 8; i++)
    {
        gets(board[i]);
    }
    k[0] = -1;
    i = 0;
    while(i >= 0&&i < 8)
    {
        k[i]++;
        if(k[i] == 8){
            i--;
        }
        else{
            t = 1;
            while(t != 0&&k[i] < 8)
            {
                while(board[i][k[i]] == '#')    k[i]++;
                if(k[i] == 8)    break;
                t = 0;
                for(x = i - 1; x >= 0; x--)
                {
                    if(k[x] == k[i]){
                        t++;
                        break;
                    }
                }
                if(t == 0){
                    for(x = i - 1, y = k[i] - 1; x >= 0&&y >= 0; x--, y--)
                    {
                        if(k[x] == y){
                            t++;
                            break;
                        }
                    }
                }
                if(t == 0){
                    for(x = i - 1, y = k[i] + 1; x >= 0&&y < 8; x--, y++)
                    {
                        if(k[x] == y){
                            t++;
                            break;
                        }
                    }
                }
                if(t != 0)    k[i]++;
            }
            if(k[i] == 8){
                i--;
            }
            else{
                i++;
                k[i] = -1;
            }
        }
    }
    for(i = 0; i < 8; i++)
    {
        printf("%d", k[i] + 1);
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

    int k[9], t, i, x, y;
    char board[8][9];

    for(i = 0; i < 8; i++)
    {
        cin >> board[i];
    }
    k[0] = -1;
    i = 0;
    while(i >= 0)
    {
        if(i == 8)    break;
        for(; ; )
        {
            t = 0;
            k[i]++;
            while(board[i][k[i]] == '#')    k[i]++;
            if(k[i] == 8){
                k[i] = -1;
                break;
            }
            for(x = i - 1; x >= 0; x--)
            {
                if(k[i] == k[x]){
                    t++;
                    break;
                }
            }
            if(t == 0){
                    for(x = i - 1, y = k[i] - 1; x >= 0&&y >= 0; x--, y--)
                {
                    if(y == k[x]){
                        t++;
                        break;
                    }
                }
            }
            if(t == 0){
                for(x = i - 1, y = k[i] + 1; x >= 0&&y < 8; x--, y++)
                {
                    if(y == k[x]){
                        t++;
                        break;
                    }
                }
            }
            if(t == 0)    break;
        }
        if(k[i] == -1){
            i--;
            continue;
        }
        k[i + 1] = -1;
        i++;
    }
    for(i = 0; i < 8; i++)
    {
        cout << k[i] + 1;
    }
    cout << endl;

    return 0;
}

```
