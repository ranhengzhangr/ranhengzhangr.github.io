```c
//GCC

#include <stdio.h>

int main (void)
{
    int s;

    scanf("%d", &s);
    if(s < 1){
        printf("Calm");
    }
    else{
        if(s <= 3){
            printf("Light air");
        }
        else{
            if(s <= 27){
                printf("Breeze");
            }
            else{
                if(s <= 47){
                    printf("Gale");
                }
                else{
                    if(s <= 63){
                        printf("Storm");
                    }
                    else{
                        printf("Hurricane");
                    }
                }
            }
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

    int n;

    cin >> n;
    if(n < 1)
        cout << "Calm";
    else if(n < 3)
        cout << "Light air";
    else if(n < 27)
        cout << "Breeze";
    else if(n < 47)
        cout << "Gale";
    else if(n < 63)
        cout << "Storm";
    else
        cout << "Hurricane";
    cout << endl;

    return 0;
}

```
