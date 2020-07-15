#include <iostream>

struct number{
    int vaule;
    struct number *next;
};

int main (void)
{
    using namespace std;

    int i, n, p, q, sum = 0;
    struct number *list = nullptr, *end = nullptr;

    for(i = 0; ; i++)
    {
        cin >> n;

        if(n != 0){
            struct number *newer = nullptr;

            newer = new struct number;
            newer->vaule = n;
            newer->next = nullptr;
            if(list == nullptr){
                list = newer;
                end = list;
            }
            else{
                end->next = newer;
                end = end->next;
            }
        }
        else    break;
    }
    cin >> p
        >> q;
    for(i = 0; i <= q; i++)
    {
        if(i >= p){
            sum += list->vaule;
        }
        list = list->next;
    }
    cout << sum
         << endl;

    return 0;
}
