#include <stdio.h>

#include <string.h>

int main (void)
{
    int i, n, score, max_score = 0, min_score = 100;
    char name[11], number[11], max_name[11], max_number[11], min_name[11], min_number[11];

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        getchar();
        scanf("%s %s %d", &name, &number, &score);
        if(score > max_score){
            max_score = score;
            strcpy(max_name, name);
            strcpy(max_number, number);
        }
        if(score < min_score){
            min_score = score;
            strcpy(min_name, name);
            strcpy(min_number, number);
        }
    }
    printf("%s %s\n", max_name, max_number);
    printf("%s %s\n", min_name, min_number);

    return 0;
}
