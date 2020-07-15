```c
//GCC

#include <stdio.h>

#include <string.h>

#define LEN_MAX 10000

int main (void)
{
    int i, k, t;
    char std[LEN_MAX], com[LEN_MAX];

    gets(std);
    gets(com);
    char comer[strlen(std) + 1];

    k = 0;
    for(i = 0; i <= strlen(com) - strlen(std); i++)
    {
        for(t = 0; t < strlen(std); t++)
        {
            comer[t] = com[i + t];
        }
        comer[t] = '\0';
        if(strcmp(std, comer) == 0){
            if(k > 0)    printf(" ");
            printf("%d", i);
            k++;
        }
    }
    if(k == 0)    printf("-1");

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cstring>

#define MAX 10000

int main (void)
{
    using namespace std;

    int i, k, t, sum;
    char stand[MAX], comer[MAX];

    cin.getline(stand, MAX, '\n');
    cin.getline(comer, MAX, '\n');
    t = 0;
    for(i = 0; i <= strlen(comer) - strlen(stand); i++)
    {
        sum = 0;
        for(k = 0; k < strlen(stand); k++)
        {
            if(comer[i + k] != stand[k])    sum++;
        }
        if(sum == 0){
            if(t > 0)    cout << " ";
            cout << i;
            t++;
        }
    }

    return 0;
}

```
