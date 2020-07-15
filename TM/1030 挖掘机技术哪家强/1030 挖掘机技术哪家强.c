#include <stdio.h>

#include <stdlib.h>

struct compete{
    int team;
    int score;
    struct compete *next;
};

int main (void)
{
    int i, n, new_team, new_score;
    struct compete *list = NULL, *prev, *cur;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &new_team, &new_score);
        for(prev = NULL, cur = list; cur != NULL&&cur->team != new_team; prev = cur, cur = cur->next);
        if(cur == NULL){
            struct compete *new_compete = NULL;

            new_compete = malloc(sizeof(struct compete));
            new_compete->team = new_team;
            new_compete->score = new_score;
            if(prev == NULL){
                new_compete->next = list;
                list = new_compete;
            }
            else{
                new_compete->next = prev->next;
                prev->next = new_compete;
            }
        }
        else{
            cur->score += new_score;
        }
    }
    for(prev = list; list != NULL; list = list->next)
    {
        if(list->score > prev->score){
            prev = list;
        }
    }
    printf("%d %d\n", prev->team, prev->score);

    return 0;
}
