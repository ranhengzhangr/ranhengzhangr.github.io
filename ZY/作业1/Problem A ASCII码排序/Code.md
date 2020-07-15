```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, t;
    char ch[3], mote;

    while(scanf("%s", &ch) != EOF)
    {
        for(i = 0; i < 3; i++)
        {
            for(t = i + 1; t < 3; t++)
            {
                if(ch[i] > ch[t]){
                    mote = ch[i], ch[i] = ch[t], ch[t] = mote;
                }
            }
        }
        printf("%c %c %c\n", ch[0], ch[1], ch[2]);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

int main (void)
{
    using namespace std;

    char a, b, c, ch;

    while(cin >> a >> b >> c)
    {
        if(a > b){
            ch = a, a = b, b = ch;
        }
        if(c < b){
            if(c < a){
                ch = c, c = b, b = a, a = ch;
            }
            else{
                ch = b, b = c, c = ch;
            }
        }
        cout << a
             << " "
             << b
             << " "
             << c
             << endl;
    }

    return 0;
}

```
