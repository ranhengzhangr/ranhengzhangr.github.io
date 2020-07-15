```c
//GCC

#include <stdio.h>

int main (void)
{
    int i, n, max = 0, min = 0;
    float max_price, min_price;

    scanf("%d", &n);
    float price[n];
    char name[n][30];

    for(i = 0; i < n; i++)
    {
        getchar();
        gets(name[i]);
        scanf("%f", &price[i]);
    }
    max_price = price[0], min_price = price[0];
    for(i = 1; i < n; i++)
    {
        if(max_price < price[i]){
            max_price = price[i];
            max = i;
        }
        if(min_price > price[i]){
            min_price = price[i];
            min = i;
        }
    }
    printf("%.2f, %s\n%.2f, %s\n", price[max], name[max], price[min], name[min]);

    return 0;
}

```

```c++
//G++

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

```
