```c
//GCC

#include <stdio.h>

int main (void)
{
    int a[100], i, n, dec, put, len;

    while(scanf("%d %d", &dec, &n) != EOF )
    {
        if(dec < 0){
            dec = -dec;
            printf("-");
        }
        else{
            ;
        }
        len = 0;
        while(dec != 0)
        {
            a[len] = dec % n;
            len++;
            dec /= n;
        }
        for(i = len - 1; i >= 0; i--)
        {
            switch(a[i])
            {
                case 0:printf("0");break;
                case 1:printf("1");break;
                case 2:printf("2");break;
                case 3:printf("3");break;
                case 4:printf("4");break;
                case 5:printf("5");break;
                case 6:printf("6");break;
                case 7:printf("7");break;
                case 8:printf("8");break;
                case 9:printf("9");break;
                case 10:printf("A");break;
                case 11:printf("B");break;
                case 12:printf("C");break;
                case 13:printf("D");break;
                case 14:printf("E");break;
                case 15:printf("F");break;
            }
        }
        printf("\n");
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cstring>

int main (void)
{
    using namespace std;

    int i, N, R, flag;
    char ch;

    while(cin >> N >> R)
    {
        char T[(N + 1) / 2];

        if(N < 0){
            flag = 1;
            N = -N;
        }
        else{
            flag = 0;
        }
        i = 0;
        while(N > 0)
        {
            switch(N % R)
            {
                case 0: T[i] = '0'; break;
                case 1: T[i] = '1'; break;
                case 2: T[i] = '2'; break;
                case 3: T[i] = '3'; break;
                case 4: T[i] = '4'; break;
                case 5: T[i] = '5'; break;
                case 6: T[i] = '6'; break;
                case 7: T[i] = '7'; break;
                case 8: T[i] = '8'; break;
                case 9: T[i] = '9'; break;
                case 10: T[i] = 'A'; break;
                case 11: T[i] = 'B'; break;
                case 12: T[i] = 'C'; break;
                case 13: T[i] = 'D'; break;
                case 14: T[i] = 'E'; break;
                case 15: T[i] = 'F'; break;
            }
            N /= R;
            i++;
        }
        T[i] = '\0';
        for(i = 0; i < strlen(T) / 2; i++)
        {
            ch = T[i];
            T[i] = T[strlen(T) - i - 1];
            T[strlen(T) - i - 1] = ch;
        }
        if(flag == 1)    cout << "-";
        cout << T
             << endl;
    }

    return 0;
}

```
