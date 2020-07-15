#include <stdio.h>

int main (void)
{
    const int Weight[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    const char Code[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int i, k, n, passer, function;
    char ID[19];

    ID[18] = '\0';
    while(scanf("%d", &n) != EOF)
    {
        passer = 0;
        for(i = 0; i < n; i++)
        {
            function = 0;
            getchar();
            for(k = 0; k < 17; k++)
            {
                ID[k] = getchar();
                function += (ID[k] - 48) * Weight[k];
            }
            ID[k] = getchar();
            if(ID[k] == Code[function % 11]){
                passer++;
            }
            else{
                printf("%s\n", ID);
            }
        }
        if(passer == n){
            printf("All passed\n");
        }
    }

    return 0;
}
