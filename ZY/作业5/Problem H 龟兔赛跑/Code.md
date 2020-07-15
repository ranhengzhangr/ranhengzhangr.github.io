```c
//GCC

#include <stdio.h>

int main (void)
{
    int f = 1, i, t, u = 0, x = 0, y = 0;

    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        if(i % 10 == 0){
            if(x > y&&f == 1){
                f = 0;
                u = i;
            }
            if(i - u == 30&&f == 0){
                f = 1;
            }
        }
        if(f == 1){
            x += 9;
        }
        y += 3;
    }
    if(x >= y){
        if(x > y){
            printf("^_^");
        }
        else{
            printf("-_-");
        }
        printf(" %d", x);
    }
    else{
        printf("@_@ %d", y);
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

    int K, T, R, C, RT, FLAG_R;

    cin >> T;
    FLAG_R = 1;
    R = 0;
    C = 0;
    RT = 0;
    for(K = 0; K < T; K++)
    {
        if(K % 10 == 0&&K > 0){
            if(FLAG_R == 1&&R > C){
                FLAG_R = 0;
                RT = K;
            }
            else if(FLAG_R == 0&&K - RT == 30){
                FLAG_R = 1;
            }
        }
        C += 3;
        R += FLAG_R * 9;
    }
    if(R == C){
        cout << "-_- "
             << R;
    }
    else{
        if(R > C){
            cout << "^_^ "
                 << R;
        }
        else{
            cout << "@_@ "
                 << C;
        }
    }
    cout << endl;

    return 0;
}

```
