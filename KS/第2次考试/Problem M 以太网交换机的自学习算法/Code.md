```c
//GCC

#include <stdio.h>

#include <string.h>

void put_Source_Mac_Address(char ch[]);

void put_Ports(char ch[]);

void put_Source_Mac_Address(char ch[])
{
    int i, len;

    len = strlen(ch);
    for(i = 0; i < 18; i++)
    {
        if(i < len){
            putchar(ch[i]);
        }
        else{
            putchar(' ');
        }
    }
}

void put_Ports(char ch[])
{
    int i, len;

    len = strlen(ch);
    for(i = 0; i < 8; i++)
    {
        if(i < len){
            putchar(ch[i]);
        }
        else{
            putchar(' ');
        }
    }
}

int main (void)
{
    int i, i0, i1, i2, fose, ocea[24];
    char Mac_Address[24][15], Source_Mac_Address[24][15], Ports[24][4], Time[24][4], acen[24][15], ch[15];

    for(i = 0; i < 24&&scanf("%s", &Mac_Address[i]) != EOF; i++)
    {
        getchar();
        scanf("%s", &Source_Mac_Address[i]);
        getchar();
        scanf("%s", &Ports[i]);
        getchar();
        scanf("%s", &Time[i]);
        ocea[i] = i;
        strcpy(acen[i], Source_Mac_Address[i]);
    }
    for(i1 = 0; i1 < i; i1++)
    {
        for(i2 = i1 + 1; i2 < i; i2++)
        {
            if(strcmp(acen[i1], acen[i2]) > 0){
                strcpy(ch, acen[i1]), strcpy(acen[i1], acen[i2]), strcpy(acen[i2], ch);
                fose = ocea[i1], ocea[i1] = ocea[i2], ocea[i2] = fose;
            }
        }
    }
    printf("Mac Address       Ports   Time\n");
    for(i0 = 0; i0 < i; i0++)
    {
        put_Source_Mac_Address(Source_Mac_Address[ocea[i0]]);
        put_Ports(Ports[ocea[i0]]);
        printf("%s\n", Time[ocea[i0]]);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cstring>

#include <cmath>

typedef struct item{
    int nmbr;
    int time;
    char srce[15];
    struct item *next;
} Item;

Item *add(Item *list);

int main (void)
{
    using namespace std;

    int i, n;
    char MAC[15];
    Item *list = nullptr;

    while(cin >> MAC)    list = add(list);
    cout << "Mac Address       Ports   Time"
        << endl;
    while (list != nullptr)
    {
        cout << list->srce
            << "    "
            << list->nmbr;
        if (list->nmbr == 0)    n = 1;
        else    n = log10(list->nmbr) + 1;
        n = 8 - n;
        for (i = 0; i < n; i++)    cout.put(' ');
        cout << list->time
            << endl;
        list = list->next;
    }

    return 0;
}

Item *add(Item *list)
{
    using namespace std;

    Item *newer;
    Item *cur = nullptr, *prov = list;

    newer = new Item;
    cin >> newer->srce
        >> newer->nmbr
        >> newer->time;
    newer->next = nullptr;
    for(; prov != nullptr&&strcmp(prov->srce, newer->srce) < 0; cur = prov, prov = prov->next);
    if(cur == nullptr){
        newer->next = list;
        list = newer;
    }
    else{
        if(prov != nullptr&&strcmp(prov->srce, newer->srce) == 0){
            prov->time = newer->time;
            prov->nmbr = newer->nmbr;
        }
        else{
            cur->next = newer;
            newer->next = prov;
        }
    }

    return list;
}

```
