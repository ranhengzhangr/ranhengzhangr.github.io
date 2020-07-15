#include <stdio.h>

void swap(int *a, int *b);

int main (void)
{
    int a, b;

    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
    int mote;

    mote = *a;
    *a = *b;
    *b = mote;
}
