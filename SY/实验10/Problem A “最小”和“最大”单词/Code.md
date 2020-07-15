```c
//GCC

#include <stdio.h>

#include <string.h>

#include <ctype.h>

int compare(char ch[], char com[]);

int main (void)
{
    char ch[21], max[21] = {96, '\0'}, min[21] = {123, '\0'};

    while(scanf("%s", ch) != EOF&&strlen(ch) != 4)
    {
        if(compare(ch, max) > 0)    strcpy(max, ch);
        if(compare(ch, min) < 0)    strcpy(min, ch);
    }
    if(compare(ch, max) > 0)    strcpy(max, ch);
    if(compare(ch, min) < 0)    strcpy(min, ch);
    printf("%s\n%s", min, max);

    return 0;
}

int compare(char ch[], char com[])
{
    int i;
    char ch_t[strlen(ch) + 1], com_t[strlen(com) + 1];

    for(i = 0; i < strlen(ch); i++)
    {
        ch_t[i] = tolower(ch[i]);
    }
    ch_t[i] = '\0';
    for(i = 0; i < strlen(com); i++)
    {
        com_t[i] = tolower(com[i]);
    }
    com_t[i] = '\0';

    return strcmp(ch_t, com_t);
}

```

```c++
//G++

#include <iostream>

#include <cstring>

#include <cctype>

int compar(const char cha[], const char chb[]);

int main (void)
{
    using namespace std;

    char ch[81], mix[81], man[81];

    mix[0] = 123;
    mix[1] = '\0';
    man[0] = 96;
    man[1] = '\0';
    while(cin >> ch&&strlen(ch) != 4)
    {
        if(compar(ch, mix) < 0)    strcpy(mix, ch);
        if(compar(ch, man) > 0)    strcpy(man, ch);
    }
    if(compar(ch, mix) < 0)    strcpy(mix, ch);
    if(compar(ch, man) > 0)    strcpy(man, ch);
    cout << mix
         << endl
         << man
         << endl;
}

int compar(const char cha[], const char chb[])
{
    using namespace std;

    int i;
    char cha_t[81], chb_t[81];

    for(i = 0; i < strlen(cha); i++)
    {
        cha_t[i] = tolower(cha[i]);
    }
    cha_t[i] = '\0';
    for(i = 0; i < strlen(chb); i++)
    {
        chb_t[i] = tolower(chb[i]);
    }
    chb_t[i] = '\0';

    return strcmp(cha_t, chb_t);
}

```
