```c
//GCC

#include <stdio.h>

int main (void)
{
    int a[3], i;

    for(i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    if(a[0] == a[1]){
        printf("C");
    }
    else{
        if(a[0] == a[2]){
            printf("B");
        }
        else{
            printf("A");
        }
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

    int A, B, C;
    char ch[3] = {'A', 'B', 'C'};
    char *ta = ch;

    cin >> A
        >> B
        >> C;
    if(A > B){
        if(A < C)    ta += 2;
    }
    else{
        if(B > C)    ta++;
        else    ta += 2;
    }
    cout << *ta
         << endl;

    return 0;
}

```
