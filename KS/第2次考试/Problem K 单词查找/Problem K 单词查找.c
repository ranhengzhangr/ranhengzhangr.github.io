#include <stdio.h>

#include <stdbool.h>

#include <string.h>

bool finder(const char sorce[], const char target[]);

int main (void)
{
    int i, n;
    char sor[1001], tar[11];

    scanf("%d\n", &n);
    for(i = 0; i < n; i++)
    {
        gets(sor);
        gets(tar);
        if(finder(sor, tar))    printf("YES\n");
        else    printf("NO\n");
    }

    return 0;
}

bool finder(const char sorce[], const char target[])
{
    int x, y, sum;

    for(x = 0; x < strlen(sorce) - strlen(target); x++)
    {
        if(sorce[x] == target[0]){
            for(y = 1, sum = 1; y < strlen(target); y++)
            {
                if(sorce[x + y] != target[y])    break;
                sum++;
            }
            if(sum == strlen(target))    return true;
        }
    }

    return false;
}
