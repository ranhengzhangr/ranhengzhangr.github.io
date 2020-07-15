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
