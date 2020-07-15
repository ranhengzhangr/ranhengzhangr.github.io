```c
//GCC

#include <stdio.h>

int main (void)
{
    int y, m, d, n;

    while(scanf("%d/%d/%d", &y, &m, &d) != EOF)
    {
        y = y % 4;
        if (y == 0){
            switch(m)
            {
                case 1:d = d;break;
                case 2:d = d + 31;break;
                case 3:d = d + 60;break;
                case 4:d = d + 91;break;
                case 5:d = d + 121;break;
                case 6:d = d + 152;break;
                case 7:d = d + 182;break;
                case 8:d = d + 213;break;
                case 9:d = d + 244;break;
                case 10:d = d + 274;break;
                case 11:d = d + 305;break;
                case 12:d = d + 335;break;
            }
        }
        else{
            switch(m)
            {
                case 1:d = d;break;
                case 2:d = d + 31;break;
                case 3:d = d + 59;break;
                case 4:d = d + 90;break;
                case 5:d = d + 120;break;
                case 6:d = d + 151;break;
                case 7:d = d + 181;break;
                case 8:d = d + 212;break;
                case 9:d = d + 243;break;
                case 10:d = d + 273;break;
                case 11:d = d + 304;break;
                case 12:d = d + 334;break;
            }
        }
        printf("%d\n", d);
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

    int y, m, d;

    while(cin >> y)

    {
        cin.get();
        cin >> m;
        cin.get();
        cin >> d;
        switch(m)
        {
            case 1: break;
            case 2: d += 31; break;
            case 3: d += 59; break;
            case 4: d += 90; break;
            case 5: d += 120; break;
            case 6: d += 151; break;
            case 7: d += 181; break;
            case 8: d += 212; break;
            case 9: d += 243; break;
            case 10: d += 273; break;
            case 11: d += 304; break;
            case 12: d += 334; break;
        }
        if(m > 2&&y % 4 == 0&&(y % 100 != 0||y % 400 == 0))    d++;
        cout << d
             << endl;
    }
    return 0;
}

```
