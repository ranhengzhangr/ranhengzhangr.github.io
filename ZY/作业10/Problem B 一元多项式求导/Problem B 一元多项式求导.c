#include <stdio.h>

int main (void)
{
    int i, u, base, index;

    for(i = 0, u = 0; u == 0; i++)
    {
        scanf("%d %d", &base, &index);
        if(i == 0&&index == 0){
            printf("0 0\n");
        }
        if(index == 0){
            u = 1;
        }
        if(base != 0&&index != 0){
            if(i > 0){
                printf(" ");
            }
            printf("%d %d", base * index, index - 1);
        }
    }

    return 0;
}
