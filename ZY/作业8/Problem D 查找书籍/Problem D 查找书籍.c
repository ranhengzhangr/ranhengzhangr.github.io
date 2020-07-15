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
