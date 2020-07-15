#include <stdio.h>

int main (void)
{
    int n;

    while(scanf("%d\n", &n) != EOF )
    {
        int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
        char ch;

        while((ch = getchar()) != '\n')
        {
            switch(ch)
            {
                case 'a':num1++;break;
                case 'e':num2++;break;
                case 'i':num3++;break;
                case 'o':num4++;break;
                case 'u':num5++;break;
                default:;break;
            }
        }
        printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n", num1, num2, num3, num4, num5);
    }

    return 0;
}
