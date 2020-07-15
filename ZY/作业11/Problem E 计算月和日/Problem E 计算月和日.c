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
