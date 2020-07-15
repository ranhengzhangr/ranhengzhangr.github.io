#include <stdio.h>

int main (void)
{
    int i, u, date[2], month[2], year[2];

    scanf("%d/%d/%d\n", &month[0], &date[0], &year[0]);
    scanf("%d/%d/%d", &month[1], &date[1], &year[1]);
    if(year[0] == year[1]){
        u = 0;
    }
    else{
        if(year[0] > year[1]){
            u = 1;
        }
        else{
            u = -1;
        }
    }
    if(u == 0){
        if(month[0] == month[1]){
            u = 0;
        }
        else{
            if(month[0] > month[1]){
                u = 1;
            }
            else{
                u = -1;
            }
        }
        if(u == 0){
            if(date[0] == date[1]){
                u = 0;
            }
            else{
                if(date[0] > date[1]){
                    u = 1;
                }
                else{
                    u = -1;
                }
            }
        }
    }
    printf("%d", u);

    return 0;
}
