```c
//GCC

#include <stdio.h>

int main (void)
{
    int YEA, MON, DAY;

    scanf("%d%d", &YEA, &DAY);
    if(YEA % 4 == 0&&(YEA % 100 != 0||YEA % 400 == 0&&DAY > 59)){
        DAY--;
    }
    if(DAY > 334){
        MON = 12;
        DAY -= 334;
    }
    else{
        if(DAY > 304){
            MON = 11;
            DAY -= 304;
        }
        else{
            if(DAY > 273){
                MON = 10;
                DAY -= 273;
            }
            else{
                if(DAY > 243){
                    MON = 9;
                    DAY -= 243;
                }
                else{
                    if(DAY > 212){
                        MON = 8;
                        DAY -= 212;
                    }
                    else{
                        if(DAY > 181){
                            MON = 7;
                            DAY -= 181;
                        }
                        else{
                            if(DAY > 151){
                                MON = 6;
                                DAY -= 151;
                            }
                            else{
                                if(DAY > 120){
                                    MON = 5;
                                    DAY -= 120;
                                }
                                else{
                                    if(DAY > 90){
                                        MON = 4;
                                        DAY -= 90;
                                    }
                                    else{
                                        if(DAY > 59){
                                            MON = 3;
                                            DAY -= 59;
                                        }
                                        else{
                                            if(DAY > 31){
                                                MON = 2;
                                                DAY -= 31;
                                            }
                                            else{
                                                MON = 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("month = %d, day = %d", MON, DAY);

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

    cin >> y
        >> d;
    if((y % 4 == 0&&(y % 100 != 0||y % 400 == 0))&&d > 59)    d--;
    if(d > 355)    m = 12;
    else if(d > 304)    m = 11, d -= 304;
    else if(d > 273)    m = 10, d -= 273;
    else if(d > 243)    m = 9, d -= 243;
    else if(d > 212)    m = 8, d -= 212;
    else if(d > 181)    m = 7, d -= 181;
    else if(d > 151)    m = 6, d -= 151;
    else if(d > 120)    m = 5, d -= 120;
    else if(d > 90)    m = 4, d -= 90;
    else if(d > 59)    m = 3, d -= 59;
    else if(d > 31)    m = 2, d -= 31;
    else    m = 1;
    cout << "month = "
         << m
         << ", day = "
         << d
         << endl;

    return 0;
}

```
