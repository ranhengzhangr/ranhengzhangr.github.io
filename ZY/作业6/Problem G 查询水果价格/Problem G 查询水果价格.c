#include <stdio.h>

int main (void)
{
    int i, n;

    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if(n < 0||n > 4){
            printf("price = 0.00\n");
        }
        else{
            if(n == 0){
                break;
            }
            switch(n)
            {
                case 1:printf("price = 3.00\n");break;
                case 2:printf("price = 2.50\n");break;
                case 3:printf("price = 4.10\n");break;
                case 4:printf("price = 10.20\n");break;
            }
        }
    }

    return 0;
}
