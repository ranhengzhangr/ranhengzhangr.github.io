#include <stdio.h>

int main (void)
{
    int n;

    scanf("%d", &n);
    if(n >= 0&&n <= 60){
        printf("Speed: %d - OK", n);
    }
    else{
        printf("Speed: %d - Speeding", n);
    }
}
