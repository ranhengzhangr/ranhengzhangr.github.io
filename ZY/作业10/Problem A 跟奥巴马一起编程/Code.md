```c
//GCC

#include <stdio.h>

int main (void)
{
    int ix, iy, x, y;
    char ch;

    scanf("%d %c", &x, &ch);
    y = x / 2;
    for(iy = 0; iy < y; iy++)
    {
        for(ix = 0; ix < x; ix++)
        {
            if(iy > 0&&iy < y - 1&&ix > 0&&ix < x - 1){
                printf(" ");
            }
            else{
                putchar(ch);
            }
        }
        printf("\n");
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

    int x, y, n;
    char ch;

    cin >> n;
    cin.get();
    cin.get(ch);
    for(x = 0; x < (n + 1) / 2; x++)
    {
        cout << ch;
        for(y = 1; y < n - 1; y++)
        {
            if(x == 0||x == n / 2 - 1)    cout << ch;
            else    cout << " ";
        }
        cout << ch
             << endl;
    }

    return 0;
}

```
