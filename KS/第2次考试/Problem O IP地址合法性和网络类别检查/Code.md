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

    int A, T, P, X;

    while(cin >> A)
    {
        cin.get();
        cin >> T;
        cin.get();
        cin >> P;
        cin.get();
        cin >> X;
        if(A < 0||A > 255||T < 0||T > 255||P < 0||P > 255||X < 0||X > 255)    cout << "NO";
        else if(A < 128)    cout << "A";
        else if(A < 192)    cout << "B";
        else if(A < 224)    cout << "C";
        else if(A < 240)    cout << "D";
        else    cout << "E";
        cout << endl;
    }

    return 0;
}

```
