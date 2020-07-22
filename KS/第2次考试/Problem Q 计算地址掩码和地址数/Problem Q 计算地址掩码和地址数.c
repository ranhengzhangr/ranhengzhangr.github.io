#include <stdio.h>

#include <math.h>

int main (void)
{
    int a[4], i, n, t;

    while(scanf("%d", &n) != EOF)
    {
        t = pow(2, 32 - n) - 2;
        for(i = 0; i < 4; i++)
        {
            if(n >= 8){
                a[i] = 255;
                n -= 8;
            }
            else{
                switch(n)
                {
                    case 0:a[i] = 0;break;
                    case 1:a[i] = 128;break;
                    case 2:a[i] = 192;break;
                    case 3:a[i] = 224;break;
                    case 4:a[i] = 240;break;
                    case 5:a[i] = 248;break;
                    case 6:a[i] = 252;break;
                    case 7:a[i] = 254;break;
                }
                n = 0;
            }
        }
        printf("%d.%d.%d.%d %d\n", a[0], a[1], a[2], a[3], t);
    }

    return 0;
}
