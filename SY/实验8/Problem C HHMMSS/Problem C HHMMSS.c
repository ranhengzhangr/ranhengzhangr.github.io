#include <stdio.h>

#include <stdlib.h>

void split_time(int total_sec, int *hr, int *min, int *sec);

int main (void)
{
    int total_sec;
    int hr, min, sec;

    scanf("%d", &total_sec);
    split_time(total_sec, &hr, &min, &sec);
    printf("%.2d:%.2d:%.2d\n", hr, min, sec);

    return 0;
}

void split_time(int total_sec, int *hr, int *min, int *sec)
{
    *sec = total_sec % 60;
    total_sec /= 60;
    *min = total_sec % 60;
    *hr = total_sec / 60;
}
