#include <stdio.h>

#define N 100

void find_two_largest(const int a[],int n,int *largest,int *second_largest);

int main (void)
{
    int a[N], len;
    int largest, second_largest;

    scanf("%d", &len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }
    find_two_largest(a, len, &largest, &second_largest);
    printf("%d %d\n", largest, second_largest);

    return 0;
}

void find_two_largest(const int a[],int n,int *largest,int *second_largest)
{
    int i, t;

    *largest = a[0];
    *second_largest = a[1];
    for (i = 0; i <= n; i++)
    {
        if(a[i] > *largest){
            *largest = a[i];
            t = i;
        }
    }
    for (i = 0; i <= n; i++){
        if(a[i] > *second_largest&&i != t){
            *second_largest = a[i];
        }
    }
}
