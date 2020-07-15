```c
//GCC

#include <stdio.h>

int main (void)
{
    int IP[4], flag;

    while(scanf("%d.%d.%d.%d", &IP[0], &IP[1], &IP[2], &IP[3]) != EOF)
    {
        if(IP[0] < 0||IP[0] > 255||IP[1] < 0||IP[1] > 255||IP[2] < 0||IP[2] > 255||IP[3] < 0||IP[3] > 255){
            printf("NO\n");
        }
        else{
            if(IP[0] < 128){
                printf("A\n");
            }
            else{
                if(IP[0] < 192){
                    printf("B\n");
                }
                else{
                    if(IP[0] < 224){
                        printf("C\n");
                    }
                    else{
                        if(IP[0] < 240){
                            printf("D\n");
                        }
                        else{
                            printf("E\n");
                        }
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

    int k1, k2, k3, k4;

    while(cin >> k1)
    {
        cin.get();
        cin >> k2;
        cin.get();
        cin >> k3;
        cin.get();
        cin >> k4;
        if(k1 < 1||k1 > 255||k2 < 0||k2 > 255||k3 < 0||k3 > 255||k4 < 0||k4 > 255){
            cout << "NO";
        }
        else{
            if(k1 < 128)    cout << "A";
            else if(k1 < 192)    cout << "B";
            else if(k1 < 224)    cout << "C";
            else if(k1 < 240)    cout << "D";
            else    cout << "E";
        }
        cout << endl;
    }

    return 0;
}

```
