```c
//GCC

#include <stdio.h>

#include <string.h>

int main (void)
{
    int i, t, u;
    char ta[80], ch[5][80];

    for(i = 0; i < 5; i++)
    {
        scanf("%s", &ch[i]);
    }
    for(i = 0; i < 5; i++)
    {
        for(t = i + 1; t < 5; t++)
        {
            u = strcmp(ch[i], ch[t]);
            if(u > 0){
                strcpy(ta, ch[i]), strcpy(ch[i], ch[t]), strcpy(ch[t], ta);
            }
        }
    }
    printf("After sorted:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%s\n", ch[i]);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <string>

int main (void)
{
    using namespace std;

    int i, a, b;
    string str[5], mote;

    for(i = 0; i < 5; i++)
    {
        cin >> str[i];
    }
    for(a = 0; a < 4; a++)
    {
        for(b = a + 1; b < 5; b++)
        {
            if(str[a] > str[b]){
                mote = str[a];
                str[a] = str[b];
                str[b] = mote;
            }
        }
    }
    cout << "After sorted:"
         << endl;
    for(i = 0; i < 5; i++)
    {
        cout << str[i]
             << endl;
    }

    return 0;
}

```
