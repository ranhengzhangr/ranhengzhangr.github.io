#include <stdio.h>

int main (void)
{
    int t = 1;
    double n, sum = 1, mote = 1;

    scanf("%lf", &n);
    if(n >= 0&&n <= 5){
        while(mote < -0.00001||mote > 0.00001)
        {
            mote = (mote * n) / t;
            sum += mote;
            t++;
        }
        printf("%.4f\n", sum);
    }
    else{
        ;
    }

    return 0;
}
