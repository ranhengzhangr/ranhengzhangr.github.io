#include <stdio.h>

int main (void)
{
    int n, r, s;

    scanf("%d", &n);
    if(n >= 11&&n <= 59){
        r = n / 10;
        s = n % 10;
        switch(s)
        {
            case 1:printf("Faint signals, barely perceptible, ");break;
            case 2:printf("Very weak signals, ");break;
            case 3:printf("Weak signals, ");break;
            case 4:printf("Fair signals, ");break;
            case 5:printf("Fairly good signals, ");break;
            case 6:printf("Good signals, ");break;
            case 7:printf("Moderately strong signals, ");break;
            case 8:printf("Strong signals, ");break;
            case 9:printf("Extremely strong signals, ");break;
        }
        switch(r)
        {
            case 1:printf("unreadable.\n");break;
            case 2:printf("barely readable, occasional words distinguishable.\n");break;
            case 3:printf("readable with considerable difficulty.\n");break;
            case 4:printf("readable with practically no difficulty.\n");break;
            case 5:printf("perfectly readable.\n");break;
        }
    }

    return 0;
}
