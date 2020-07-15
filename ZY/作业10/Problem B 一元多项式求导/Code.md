```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, u, base, index;

    for(i = 0, u = 0; u == 0; i++)
    {
        scanf("%d %d", &base, &index);
        if(i == 0&&index == 0){
            printf("0 0\n");
        }
        if(index == 0){
            u = 1;
        }
        if(base != 0&&index != 0){
            if(i > 0){
                printf(" ");
            }
            printf("%d %d", base * index, index - 1);
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

    int i, k, n, f;

    k = 0;
    while(cin >> n >> f&&f != 0)
    {
        n *= f;
        f--;
        if(k > 0)    cout << " ";
        cout << n
             << " "
             << f;
        k++;
    }
    if(k == 0)    cout << "0 0";
    cout << endl;

    return 0;
}

```
