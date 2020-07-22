#include <stdio.h>

int main (void)
{
    int IP[4], i, k, t;

    for(i = 0; i < 4; i++)
    {
        t = 1;
        IP[i] = 0;
        for(k = 0; k < 8; k++)
        {
            IP[i] += getchar() - 48;
            IP[i] *= 2;
        }
        IP[i] /= 2;
        if(i > 0){
            printf(".");
        }
        printf("%d", IP[i]);
    }

    return 0;
}
