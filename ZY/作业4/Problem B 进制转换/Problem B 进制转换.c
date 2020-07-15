#include <stdio.h>

int main (void)
{
    int a[100], i, n, dec, put, len;

    while(scanf("%d %d", &dec, &n) != EOF )
    {
        if(dec < 0){
            dec = -dec;
            printf("-");
        }
        else{
            ;
        }
        len = 0;
        while(dec != 0)
        {
            a[len] = dec % n;
            len++;
            dec /= n;
        }
        for(i = len - 1; i >= 0; i--)
        {
            switch(a[i])
            {
                case 0:printf("0");break;
                case 1:printf("1");break;
                case 2:printf("2");break;
                case 3:printf("3");break;
                case 4:printf("4");break;
                case 5:printf("5");break;
                case 6:printf("6");break;
                case 7:printf("7");break;
                case 8:printf("8");break;
                case 9:printf("9");break;
                case 10:printf("A");break;
                case 11:printf("B");break;
                case 12:printf("C");break;
                case 13:printf("D");break;
                case 14:printf("E");break;
                case 15:printf("F");break;
            }
        }
        printf("\n");
    }

    return 0;
}
