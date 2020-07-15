#include <stdio.h>

int main (void)
{
    int a[3], i;

    for(i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    if(a[0] == a[1]){
        printf("C");
    }
    else{
        if(a[0] == a[2]){
            printf("B");
        }
        else{
            printf("A");
        }
    }

    return 0;
}
