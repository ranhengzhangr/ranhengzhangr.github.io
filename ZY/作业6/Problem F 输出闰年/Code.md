```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, u = 0;

    scanf("%d", &n);
    if(n <= 2000||n >= 2100){
        printf("Invalid year!\n");
    }
    else{
        for(i = 2001; i <= n; i++)
        {
            if(i % 4 == 0&&i % 100 != 0||i % 400 == 0){
                printf("%d\n", i);
                u++;
            }
        }
        if(u == 0){
            printf("None\n");
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

    int i, n;

    cin >> n;
    if(n <= 2000||n >= 2100){
        cout << "Invalid year!"
             << endl;
    }
    else if(n < 2004){
        cout << "None"
             << endl;
    }
    else{
        for(i = 2004; i <= n; i++)
        {
            if(i % 4 == 0&&(i % 4 != 100||i % 400 == 0)){
                cout << i
                     << endl;
            }
        }
    }

    return 0;
}

```
