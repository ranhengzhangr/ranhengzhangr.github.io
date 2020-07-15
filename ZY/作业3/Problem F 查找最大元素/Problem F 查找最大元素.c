#include <stdio.h>

void judge_and_put(const int a[100], const char ch[100], int n);

int main (void)
{
    int a[100], c;
    char ch[100];

    while((c = getchar()) != EOF )
    {
        int i = 1;

        a[0] = c, ch[0] = c;
        while((c = getchar()) != '\n' )
        {
            a[i] = c, ch[i] = c;
            i++;
        }
        judge_and_put(a, ch, i);
    }

    return 0;
}

void judge_and_put(const int a[100], const char ch[100], int n)
{
    int c, i, max, temp, mote;
    char cr;

    max = a[0], c = 0;
    for(i = 1; i < n; i++)
    {
        temp = a[i];
        if(max < temp){
            mote = max, max = temp, temp = mote;
            c = i;
        }
    }
    for(i = 0; i < n; i++)
    {
        temp = ch[i];
        cr = ch[i];
        putchar(cr);
        if(temp == max){
            printf("(max)");
        }
    }
    printf("\n");
}
