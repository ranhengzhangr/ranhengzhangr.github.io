#include <stdio.h>

#include <math.h>

int main (void)
{
    double a, b, c, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    if(x1 > x2){
        printf("%.5f\n", x1);
    }
    else{
        printf("%.5f\n", x2);
    }

    return 0;
}
