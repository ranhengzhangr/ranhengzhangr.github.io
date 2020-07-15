#include <stdio.h>

int main (void)

{
    int h, m, H;

    scanf("%d:%d", &h, &m);
    if(h == 0){
        printf("12");
    }
    else{
        if(h > 12){
            printf("%d", h - 12);
        }
        else{
            printf("%d", h);
        }
    }
    printf(":");
    if(m < 10){
        printf("0");
    }
    printf("%d ", m);
    if(h < 12){
        printf("AM");
    }
    else{
        printf("PM");
    }

    return 0;
}
