#include <stdio.h>

int main(void)
{
    int t;

    while(scanf("%d", &t) !=EOF)
    {
        if (0 > t||100 < t){
          printf("Score is error!\n");
        }
        else{
            t = t / 10;
            switch(t)
            {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:printf("E\n");break;
                case 6:printf("D\n");break;
                case 7:printf("C\n");break;
                case 8:printf("B\n");break;
                case 9:
                case 10:printf("A\n");break;
            }
        }
    }

    return 0;
}
