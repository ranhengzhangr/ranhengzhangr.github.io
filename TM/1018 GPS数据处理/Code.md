```c
//GCC

#include <stdio.h>

void out_put(int n);

int main (void)
{
    int h, m, s;
    char ch[200], ar[3];

    while((ar[0] = getchar()) != 'E'&&(ar[1] = getchar()) != 'N'&&(ar[2] = getchar()) != 'D')
    {
        gets(ch);
        h = (ch[4] - 48) * 10 + ch[5] - 48 + 8;
        m = (ch[6] - 48) * 10 + ch[7] - 48;
        s = (ch[8] - 48) * 10 + ch[9] - 48;
        if(h > 23){
            h -= 24;
        }
        out_put(h);
        printf(":");
        out_put(m);
        printf(":");
        out_put(s);
        printf("\n");
    }
}

void out_put(int n)
{
    if(n < 10){
        printf("0");
    }
    printf("%d", n);
}

```

```c++
//G++

#include <iostream>

#include <iomanip>

#include <cstring>

int main (void)
{
    using namespace std;

    int time;
    char ch, sign[4];

    while(cin.get(sign, 4)&&strcmp(sign, "END") != 0)
    {
        while((ch = cin.get()) != ',');
        cin >> time;
        while((ch = cin.get()) != '\n');
        time += 80000;
        if(time > 245959)    time -= 240000;
        cout << noshowpos
             << setw(2)
             << right
             << setfill('0')
             << time / 10000
             << ":";
        time %= 10000;
        cout << noshowpos
             << setw(2)
             << right
             << setfill('0')
             << time / 100
             << ":"
             << noshowpos
             << setw(2)
             << right
             << setfill('0')
             << time % 100
             << endl;
    }

    return 0;
}

```
