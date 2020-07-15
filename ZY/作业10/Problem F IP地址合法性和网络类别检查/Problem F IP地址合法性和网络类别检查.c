#include <stdio.h>

int main (void)
{
    int IP[4], flag;

    while(scanf("%d.%d.%d.%d", &IP[0], &IP[1], &IP[2], &IP[3]) != EOF)
    {
        if(IP[0] < 0||IP[0] > 255||IP[1] < 0||IP[1] > 255||IP[2] < 0||IP[2] > 255||IP[3] < 0||IP[3] > 255){
            printf("NO\n");
        }
        else{
            if(IP[0] < 128){
                printf("A\n");
            }
            else{
                if(IP[0] < 192){
                    printf("B\n");
                }
                else{
                    if(IP[0] < 224){
                        printf("C\n");
                    }
                    else{
                        if(IP[0] < 240){
                            printf("D\n");
                        }
                        else{
                            printf("E\n");
                        }
                    }
                }
            }
        }
    }

    return 0;
}
