```c
//GCC

#include <stdio.h>

int main (void)
{
    int p, g;

    scanf("%d", &p);
    if(p > 100||p < 0){
        printf("Illegal grade");
    }
    else{
        g = p / 10;
        if(g <= 10&&g > 0){
            switch(g)
            {
                case 10:
                case 9:printf("A");break;
                case 8:printf("B");break;
                case 7:printf("C");break;
                case 6:printf("D");break;
                default:printf("F");break;
            }
        }
        else{
            printf("Illegal grade");
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
    if(n < 0||n > 100){
        cout << "Illegal grade";
    }
    else{
        if(n < 50){
            cout << "F";
        }
        else{
            switch((n - 50) / 10)
            {
                case 0: cout << "F"; break;
                case 1: cout << "D"; break;
                case 2: cout << "C"; break;
                case 3: cout << "B"; break;
                default : cout << "A"; break;
            }
        }
    }
    cout << endl;

    return 0;
}

```
