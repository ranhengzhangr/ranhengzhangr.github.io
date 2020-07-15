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
