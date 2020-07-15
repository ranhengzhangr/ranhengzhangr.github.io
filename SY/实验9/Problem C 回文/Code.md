```c
//GCC

#include <stdio.h>

#include <string.h>

#include <ctype.h>

int main (void)
{
    int i, len, flag;
    char ch[81], ar;
    char *chj;

    i = 0;
    while((ar = getchar()) != '\n')
    {
        if(isalpha(ar)){
            ch[i] = tolower(ar);
            i++;
        }
    }
    ch[i] = '\0';
    len = strlen(ch);
    chj = &ch[len - 1];
    flag = 0;
    for(i = 0; i < len / 2; i++, chj--)
    {
        if(!(ch[i] == *chj))    flag = 1;
    }
    if(flag == 0)    printf("Palindrome\n");
    else    printf("Not a palindrome\n");

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cstring>

#include <cctype>

bool jude(char *cha, char *chb, int len);

int main (void)
{
    using namespace std;

    int i;
    char ch[81], ar;

    i = 0;
    while((ar = cin.get()) != '\n')
    {
        if(isalnum(ar)){
            ch[i] = tolower(ar);
            i++;
        }
    }
    ch[i] = '\0';
    if(jude(&ch[0], &ch[i - 1], i))    cout << "Palindrome";
    else    cout << "Not a palindrome";
    cout << endl;

    return 0;
}

bool jude(char *cha, char *chb, int len)
{
    using namespace std;

    int i;

    for(i = 0; i < len / 2; i++, cha++, chb--)
    {
        if(*cha != *chb)    return false;
    }

    return true;
}

```
