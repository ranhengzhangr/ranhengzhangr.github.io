#include <stdio.h>

#define CLK_TCK 100

int main (void)
{
    int C1, C2, C, hh, mm, ss;

    scanf("%d %d", &C1, &C2);
    C = C2 - C1;
    if(C % CLK_TCK >= 50)    C += CLK_TCK;
    C /= CLK_TCK;
    ss = C % 60;
    C /= 60;
    mm = C % 60;
    hh = C / 60;
    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}
