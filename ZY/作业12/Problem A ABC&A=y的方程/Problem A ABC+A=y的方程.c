#include <stdio.h>

int main (void)
{
    int y, i1, i2, i3, flag;

    scanf("%d", &y);
    flag = 0;
    for(i1 = 1; i1 < 10&&flag == 0; i1++)
    {
        for(i2 = 0; i2 < 10&&flag == 0; i2++)
        {
            for(i3 = 0; i3 < 10&&flag == 0; i3++)
            {
                if((i1 * 10 + i2) * i3 + i1 == y){
                    flag = 1;
                }
            }
        }
    }
    printf("%d %d %d", i1 - 1, i2 - 1, i3 - 1);

    return 0;
}
