#include <stdio.h>

#include <string.h>

int main (void)
{
    int i, k, m, n, fose;

    scanf("%d %d", &m, &n);
    int Purpose_Number[m], Sourse_Number[n];
    char MAC_Address[m][15], Purpose_Address[n][15], Sourse_Address[n][15];
    for(i = 0; i < m; i++)
    {
        getchar();
        scanf("%s", &MAC_Address[i]);
        scanf("%d %d", &Purpose_Number[i], &fose);
    }
    for(i = 0; i < n; i++)
    {
        getchar();
        scanf("%s", &Purpose_Address[i]);
        getchar();
        scanf("%s", &Sourse_Address[i]);
        scanf("%d %d", &Sourse_Number[i], &fose);
    }
    for(i = 0; i < n; i++)
    {
        printf("%s", Purpose_Address[i]);
        printf("    ");
        for(k = 0, fose = 0; k < m; k++)
        {
            if(strcmp(MAC_Address[k], Purpose_Address[i]) == 0){
                fose = 1;
                if(Purpose_Number[k] == Sourse_Number[i]){
                    printf("NONE\n");
                }
                else{
                    printf("%d\n", Purpose_Number[k]);
                }
            }
        }
        if(fose == 0){
            printf("ALL\n");
        }
    }

    return 0;
}
