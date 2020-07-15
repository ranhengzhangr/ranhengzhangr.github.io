#include <stdio.h>

int main (void)
{
    int p, g;

    scanf("%d", &p);
    if(p > 100||p < 0){
        printf("Illegal grade");
    }
    else{
        g = p / 10;
        if(g <= 10&&g > 0){
            switch(g)
            {
                case 10:
                case 9:printf("A");break;
                case 8:printf("B");break;
                case 7:printf("C");break;
                case 6:printf("D");break;
                default:printf("F");break;
            }
        }
        else{
            printf("Illegal grade");
        }
    }

    return 0;
}
