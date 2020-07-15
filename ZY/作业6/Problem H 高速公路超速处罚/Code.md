```c
//GCC

#include <stdio.h>

void out_judge(int lim, float vel);

int main (void)
{
    int lim;
    float vel;

    scanf("%f %d", &vel, &lim);
    if(vel > lim){
        out_judge(lim, vel);
    }
    else{
        printf("OK\n");
    }

    return 0;
}

void out_judge(int lim, float vel)
{
    float per;

    vel -= lim;
    per = vel / lim * 100;
    if(per >= 50){
        printf("Exceed %.0f%%. License Revoked\n", per);
    }
    else{
        if(per >= 10){
            printf("Exceed %.0f%%. Ticket 200\n", per);
        }
        else{
            printf("OK\n");
        }
    }
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

int main (void)
{
    using namespace std;

    int speed, limit;
    float point;

    cin >> speed
        >> limit;
    point = double(speed - limit) / double(limit) * 100;
    if(point < 10){
        cout << "OK";
    }
    else{
        cout << "Exceed "
             << fixed
             << setprecision(0)
             << point
             << "%. ";
        if(point < 50){
            cout << "Ticket 200";
        }
        else{
            cout << "License Revoked";
        }
    }
    cout << endl;

    return 0;
}

```
