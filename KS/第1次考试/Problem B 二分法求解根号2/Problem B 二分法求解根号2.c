#include <stdio.h>

int main (void)
{
    double eps, left = 1, right = 2, mid, Fx;

    scanf("%lf", &eps);
    while(right - left >= eps)
    {
        mid = (right + left) / 2;
        Fx = mid * mid;
        if(Fx > 2){
            right = mid;
        }
        else{
            left = mid;
        }
    }
    printf("%.6f", mid);

    return 0;
}
