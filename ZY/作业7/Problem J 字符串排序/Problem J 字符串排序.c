#include <stdio.h>

#include <string.h>

int main (void)
{
    int i, t, u;
    char ta[80], ch[5][80];

    for(i = 0; i < 5; i++)
    {
        scanf("%s", &ch[i]);
    }
    for(i = 0; i < 5; i++)
    {
        for(t = i + 1; t < 5; t++)
        {
            u = strcmp(ch[i], ch[t]);
            if(u > 0){
                strcpy(ta, ch[i]), strcpy(ch[i], ch[t]), strcpy(ch[t], ta);
            }
        }
    }
    printf("After sorted:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%s\n", ch[i]);
    }

    return 0;
}
