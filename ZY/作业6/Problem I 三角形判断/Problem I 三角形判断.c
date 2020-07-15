#include <stdio.h>

#include <math.h>

void calculate(float a, float b, float c);

int main (void)
{
    int x1, x2, x3, y1, y2, y3, u = 0;
    float l1, l2, l3;

    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    l1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    l2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    l3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    if(l1 + l2 <= l3){
        u = 1;
    }
    if(l2 + l3 <= l1){
        u = 1;
    }
    if(l3 + l1 <= l2){
        u = 1;
    }
    if(u == 0){
        calculate(l1, l2, l3);
    }
    else{
        printf("Impossible");
    }

    return 0;
}

void calculate(float a, float b, float c)
{
    float l, s, p;
    l = a + b + c;
    p = l / 2;
    s=sqrt(p * (p - a) * (p - b) * (p - c));
    printf("L = %.2f, A = %.2f", l, s);
}
