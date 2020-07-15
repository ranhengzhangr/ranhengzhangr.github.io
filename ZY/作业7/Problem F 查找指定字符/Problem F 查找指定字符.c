#include <stdio.h>

int main (void)
{
    int i, n, u, len;
    char ta, ch, wd[80];

    scanf("%c\n", &ta);
    u = 0, len = 0;
    ch = getchar();
    for(i = 0; ch != '\n'; i++)
    {
        wd[i] = ch;
        len++;
        ch = getchar();
    }
    for(i = 0; i < len; i++)
    {
        if(wd[i] == ta){
            n = i;
            u = 1;
        }
    }
    if(u == 0){
        printf("Not Found");
    }
    else{
        printf("index = %d", n);
    }

    return 0;
}
