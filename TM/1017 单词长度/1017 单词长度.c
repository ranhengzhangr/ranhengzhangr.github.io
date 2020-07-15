#include <stdio.h>

int main (void)
{
    int i, n;
    char ch;

    i = 0;
    while((ch = getchar()) != '\n')
    {
        n = 1;
        while((ch = getchar()) != ' '&&ch != '.')
        {
            n++;
        }
        if(i > 0){
            printf(" ");
        }
        printf("%d", n);
        i++;
    }
    printf("\n");

    return 0;
}
