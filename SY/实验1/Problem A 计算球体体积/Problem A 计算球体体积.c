#include <stdio.h>

int main(void)
{
    int r;
    float volume;

    scanf("%d", &r);
    volume= 4.0 / 3 * 3.14 * r * r * r;

    printf("volume = %.2f\n", volume);

    return 0;
}
