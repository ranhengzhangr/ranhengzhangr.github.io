#include <iostream>

#include <cstring>

#include <iomanip>

int main (void)
{
    using namespace std;

    int i, n, max_k, min_k;

    cin >> n;
    struct book{
        char name[31];
        float price;
    }address[n];

    max_k = 0;
    min_k = 0;
    for(i = 0; i < n; i++)
    {
        cin.get();
        cin.getline(address[i].name, 31, '\n');
        cin >> address[i].price;
        if(address[i].price > address[max_k].price)    max_k = i;
        if(address[i].price < address[min_k].price)    min_k = i;
    }
    cout << fixed
         << setprecision(2)
         << address[max_k].price
         << ", "
         << address[max_k].name
         << endl
         << fixed
         << setprecision(2)
         << address[min_k].price
         << ", "
         << address[min_k].name
         << endl;

    return 0;
}
