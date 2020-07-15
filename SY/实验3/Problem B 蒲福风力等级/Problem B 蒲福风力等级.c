#include <stdio.h>

int main (void)
{
    int s;

    scanf("%d", &s);
    if(s < 1){
        printf("Calm");
    }
    else{
        if(s <= 3){
            printf("Light air");
        }
        else{
            if(s <= 27){
                printf("Breeze");
            }
            else{
                if(s <= 47){
                    printf("Gale");
                }
                else{
                    if(s <= 63){
                        printf("Storm");
                    }
                    else{
                        printf("Hurricane");
                    }
                }
            }
        }
    }

    return 0;
}
