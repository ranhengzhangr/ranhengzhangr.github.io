```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n;
    char ch;

    i = 0;
    while((ch = getchar()) != '\n')
    {
        n = 1;
        while((ch = getchar()) != ' '&&ch != '.')
        {
            n++;
        }
        if(i > 0){
            printf(" ");
        }
        printf("%d", n);
        i++;
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

    int k, sum;
    char ch;

    sum = 0;
    k = 0;
    while((ch = cin.get()) != '\n')
    {
        if(ch == ' '){
            if(k > 0)    cout << " ";
            cout << sum;
            sum = 0;
            k++;
        }
        else{
            sum++;
        }
    }
    if(k > 0)    cout << " ";
    cout << sum - 1
         << endl;

    return 0;
}

```
