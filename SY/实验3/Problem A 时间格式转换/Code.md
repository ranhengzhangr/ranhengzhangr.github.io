```c
//GCC

#include <stdio.h>

int main (void)

{
    int h, m, H;

    scanf("%d:%d", &h, &m);
    if(h == 0){
        printf("12");
    }
    else{
        if(h > 12){
            printf("%d", h - 12);
        }
        else{
            printf("%d", h);
        }
    }
    printf(":");
    if(m < 10){
        printf("0");
    }
    printf("%d ", m);
    if(h < 12){
        printf("AM");
    }
    else{
        printf("PM");
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

    int h, m;

    cin >> h;
    cin.get();
    cin >> m;
    if(h > 0&&h <= 12){
        cout << h;
    }
    else{
        if(h == 0){
            cout << "12";
        }
        else{
            cout << h - 12;
        }
    }
    cout << ":"
         << m
         << " ";
    if(h < 12){
        cout << "AM"
             << endl;
    }
    else{
        cout << "PM"
             << endl;
    }

    return 0;
}

```
