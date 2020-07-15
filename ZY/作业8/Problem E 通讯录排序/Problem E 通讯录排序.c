#include <stdio.h>

#include <string.h>

int main (void)
{
    int i, n, t;

    scanf("%d", &n);
    int num[n], mote_int;
    char name[n][10], day[n][9], phone[n][20], mote_day[n][9], mote_char[9];

    for(i = 0; i < n; i++)
    {
        num[i] = i;
        getchar();
        scanf("%s", &name[i]);
        getchar();
        scanf("%s", &day[i]);
        getchar();
        scanf("%s", &phone[i]);
        strcpy(mote_day[i], day[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(t = i + 1; t < n; t++)
        {
            if(strcmp(mote_day[i], mote_day[t]) > 0){
               mote_int = num[i], num[i] = num[t], num[t] = mote_int;
               strcpy(mote_char, mote_day[i]), strcpy(mote_day[i], mote_day[t]), strcpy(mote_day[t], mote_char);
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%s", name[num[i]]);
        printf(" ");
        printf("%s", day[num[i]]);
        printf(" ");
        printf("%s", phone[num[i]]);
        printf("\n");
    }

    return 0;
}
