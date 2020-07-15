#include <stdio.h>

void out_judge(int lim, float vel);

int main (void)
{
    int lim;
    float vel;

    scanf("%f %d", &vel, &lim);
    if(vel > lim){
        out_judge(lim, vel);
    }
    else{
        printf("OK\n");
    }

    return 0;
}

void out_judge(int lim, float vel)
{
    float per;

    vel -= lim;
    per = vel / lim * 100;
    if(per >= 50){
        printf("Exceed %.0f%%. License Revoked\n", per);
    }
    else{
        if(per >= 10){
            printf("Exceed %.0f%%. Ticket 200\n", per);
        }
        else{
            printf("OK\n");
        }
    }
}
