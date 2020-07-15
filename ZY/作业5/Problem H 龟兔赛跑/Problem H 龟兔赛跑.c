#include <stdio.h>

int main (void)
{
    int f = 1, i, t, u = 0, x = 0, y = 0;

    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        if(i % 10 == 0){
            if(x > y&&f == 1){
                f = 0;
                u = i;
            }
            if(i - u == 30&&f == 0){
                f = 1;
            }
        }
        if(f == 1){
            x += 9;
        }
        y += 3;
    }
    if(x >= y){
        if(x > y){
            printf("^_^");
        }
        else{
            printf("-_-");
        }
        printf(" %d", x);
    }
    else{
        printf("@_@ %d", y);
    }

    return 0;
}
