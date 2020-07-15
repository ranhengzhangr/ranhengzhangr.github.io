#include <stdio.h>

int main (void)
{
    int i, n, t, hh, mm, pay, waiting, length;
    float money, far;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d:%d %f %d", &hh, &mm, &far, &waiting);
        length = far * 1000;
        if(waiting > 5)    waiting -= 5;
        else    waiting = 0;
        if (hh >= 6 && hh < 23){
            money = 5.0;
            for (t = 2500; t <= length; t += 500)
            {
                if (t <= 10000)    money += 1.0;
                else    money += 1.5;
            }
        }
        else{
            money = 6.0;
            for (t = 2500; t <= length; t += 500)
            {
                money += 1.5;
            }
        }
        pay = money + waiting * 0.5 + 0.5;
        printf("%d\n", pay);
    }

    return 0;
}
