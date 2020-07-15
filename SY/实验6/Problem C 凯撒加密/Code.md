```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, t;
    char ch1, d[100];

    i = 0;
    while((ch1 = getchar()) !='\n')
    {
        d[i] = ch1;
        i++;
    }
    t = i;
    scanf("%d", &n);
    for(i = 0; i <= t; i++)
    {
        ch1 = d[i];
        if(ch1 >= 'a'&&ch1 <= 'z'){
                ch1 = (ch1 - 'a' + n) % 26 +'a';
                d[i] = ch1;
            }
            else if(ch1 >= 'A'&&ch1 <= 'Z'){
                ch1 = (ch1 - 'A' + n) % 26 + 'A';
                d[i] = ch1;
            }
    }
        for (i = 0; i < t; i++)
        {
            putchar(d[i]);
        }
        printf("\n");

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <string>

#include <cstring>

#include <cctype>

int main (void)
{
    using namespace std;

    int i, n;
    char ar, ch[100];

    gets(ch);
    cin >> n;
    for(i = 0; i < strlen(ch); i++)
    {
        if(isalpha(ch[i])){
            ar = ch[i] + n;
            if(islower(ch[i])){
                if(!(islower(ar)))
                    ch[i] = ar - 26;
                else
                    ch[i] = ar;
            }
            if(isupper(ch[i])){
                if(!(isupper(ar)))
                    ch[i] = ar - 26;
                else
                    ch[i] = ar;
            }

        }
    }
    cout << ch
         << endl;

    return 0;
}

```
