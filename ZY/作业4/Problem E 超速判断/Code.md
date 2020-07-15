```c
//GCC

#include <stdio.h>

int main (void)
{
    int n;

    scanf("%d", &n);
    if(n >= 0&&n <= 60){
        printf("Speed: %d - OK", n);
    }
    else{
        printf("Speed: %d - Speeding", n);
    }
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int n;

    cin >> n;
    cout << "Speed: "
         << n
         << " - ";
    if(n > 60)    cout << "Speeding";
    else    cout << "OK";
    cout << endl;

    return 0;
}

```
