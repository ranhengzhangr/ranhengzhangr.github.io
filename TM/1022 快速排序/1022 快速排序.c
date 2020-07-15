#include <stdio.h>

void quick_sort(int cous[], int i, int j);

void quick_sort(int cous[], int i, int j)
{
    int p, q, k, mote;

    if(i > j){
        return;
    }
    p = i;
    q = j;
    k = i;
    for(; ; )
    {
        while(q > p&&cous[q] >= cous[k])
        {
            q--;
        }
        if(q <= p){
            break;
        }
        while(q > p&&cous[p] <= cous[k])
        {
            p++;
        }
        if(q <= p){
            break;
        }
        mote = cous[p], cous[p] = cous[q], cous[q] = mote;
    }
    mote = cous[k], cous[k] = cous[p], cous[p] = mote;
    k = p;
    quick_sort(cous, i, k - 1);
    quick_sort(cous, k + 1, j);
}

int main (void)
{
     int i, n;

     scanf("%d", &n);
     int cous[n];

     for(i = 0; i < n; i++)
     {
         scanf("%d", &cous[i]);
     }
     quick_sort(cous, 0, n - 1);
     for(i = 0; i < n; i++)
     {
         if(i > 0){
            printf(" ");
         }
         printf("%d", cous[i]);
     }
     printf("\n");

     return 0;
}
