```c
//GCC

#include <stdio.h>

int main (void)
{
    int YEA, MON, DAY;

    scanf("%d-%d-%d", &YEA, &MON, &DAY);
    switch(MON)
    {
        case 1: ;break;
        case 2:DAY += 31;break;
        case 3:DAY += 59;break;
        case 4:DAY += 90;break;
        case 5:DAY += 120;break;
        case 6:DAY += 151;break;
        case 7:DAY += 181;break;
        case 8:DAY += 212;break;
        case 9:DAY += 243;break;
        case 10:DAY += 273;break;
        case 11:DAY += 304;break;
        case 12:DAY += 334;break;
    }
    if(MON > 2&&YEA % 4 == 0&&(YEA % 100 != 0||YEA % 400 == 0)){
        DAY++;
    }
    printf("%d", DAY);

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    int y, m, d;

    cin >> y;
    cin.get();
    cin >> m;
    cin.get();
    cin >> d;
    if(m == 2)    d += 31;
    else if(m == 3)    d += 59;
    else if(m == 4)    d += 90;
    else if(m == 5)    d += 120;
    else if(m == 6)    d += 151;
    else if(m == 7)    d += 181;
    else if(m == 8)    d += 212;
    else if(m == 9)    d += 243;
    else if(m == 10)    d += 273;
    else if(m == 11)    d += 304;
    else    d += 335;
    if((y % 4 == 0&&(y % 100 != 0||y % 400 == 0))&&m > 2)    d++;
    cout << d
         << endl;

    return 0;
}

```
