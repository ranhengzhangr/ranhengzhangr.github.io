```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, u, date[2], month[2], year[2];

    scanf("%d/%d/%d\n", &month[0], &date[0], &year[0]);
    scanf("%d/%d/%d", &month[1], &date[1], &year[1]);
    if(year[0] == year[1]){
        u = 0;
    }
    else{
        if(year[0] > year[1]){
            u = 1;
        }
        else{
            u = -1;
        }
    }
    if(u == 0){
        if(month[0] == month[1]){
            u = 0;
        }
        else{
            if(month[0] > month[1]){
                u = 1;
            }
            else{
                u = -1;
            }
        }
        if(u == 0){
            if(date[0] == date[1]){
                u = 0;
            }
            else{
                if(date[0] > date[1]){
                    u = 1;
                }
                else{
                    u = -1;
                }
            }
        }
    }
    printf("%d", u);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int d1, d2, m1, m2, y1, y2, flag;

    cin >> m1;
    cin.get();
    cin >> d1;
    cin.get();
    cin >> y1;
    cin >> m2;
    cin.get();
    cin >> d2;
    cin.get();
    cin >> y2;
    if(y1 == y2){
        if(m1 == m2){
            if(d1 == d2){
                flag = 0;
            }
            else{
                if(d1 > d2)    flag = 1;
                else    flag = -1;
            }
        }
        else{
            if(m1 > m2)    flag = 1;
            else    flag = -1;
        }
    }
    else{
        if(y1 > y2)    flag = 1;
        else    flag = -1;
    }
    cout << flag
         << endl;

    return 0;
}

```
