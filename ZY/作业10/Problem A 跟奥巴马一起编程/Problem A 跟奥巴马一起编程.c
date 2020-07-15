#include <stdio.h>

int main (void)
{
    int ix, iy, x, y;
    char ch;

    scanf("%d %c", &x, &ch);
    y = x / 2;
    for(iy = 0; iy < y; iy++)
    {
        for(ix = 0; ix < x; ix++)
        {
            if(iy > 0&&iy < y - 1&&ix > 0&&ix < x - 1){
                printf(" ");
            }
            else{
                putchar(ch);
            }
        }
        printf("\n");
    }

    return 0;
}
