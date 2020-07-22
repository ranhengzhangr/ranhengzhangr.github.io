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
