```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, x, flag;
    char ch;

    i = 0, flag = 0;
    scanf("%d ", &x);
    while((ch = getchar()) != '0')
    {
        n = ch - 48;
        x *= n;
        n--;
        if(i > 0){
            printf(" ");
        }
        printf("%d %d", x, n);
        flag = 1;
        i++;
        scanf("%d ", &x);
    }
    if(flag == 0){
        printf("0 0");
    }
    printf("\n");

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int i, k, lower, upper;

    k = 0;
    while(cin >> lower >> upper&&upper != 0)
    {
        if(k > 0)    cout << " ";
        cout << lower * upper
             << " "
             << upper - 1;
        k++;
    }
    if(k == 0)    cout << "0 0";
    cout << endl;

    return 0;
}

```
