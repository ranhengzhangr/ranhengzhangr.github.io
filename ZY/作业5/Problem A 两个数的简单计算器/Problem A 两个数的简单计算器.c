#include <stdio.h>

int main (void)
{
    int m, n, t;
    char ch;

    scanf("%d ", &m);
    ch = getchar();
    scanf(" %d", &n);
    if(ch == 37||ch == 42||ch == 43||ch == 45||ch == 47){
        if(ch == 37){
            t = m % n;
        }
        if(ch == 42){
            t = m * n;
        }
        if(ch == 43){
            t = m + n;
        }
        if(ch == 45){
            t = m - n;
        }
        if(ch == 47){
            t = m / n;
        }
        printf("%d", t);
    }
    else{
        printf("ERROR");
    }

    return 0;
}
