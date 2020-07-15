#include <stdio.h>

#include <string.h>

#include <ctype.h>

int compare(char ch[], char com[]);

int main (void)
{
    char ch[21], max[21] = {96, '\0'}, min[21] = {123, '\0'};

    while(scanf("%s", ch) != EOF&&strlen(ch) != 4)
    {
        if(compare(ch, max) > 0)    strcpy(max, ch);
        if(compare(ch, min) < 0)    strcpy(min, ch);
    }
    if(compare(ch, max) > 0)    strcpy(max, ch);
    if(compare(ch, min) < 0)    strcpy(min, ch);
    printf("%s\n%s", min, max);

    return 0;
}

int compare(char ch[], char com[])
{
    int i;
    char ch_t[strlen(ch) + 1], com_t[strlen(com) + 1];

    for(i = 0; i < strlen(ch); i++)
    {
        ch_t[i] = tolower(ch[i]);
    }
    ch_t[i] = '\0';
    for(i = 0; i < strlen(com); i++)
    {
        com_t[i] = tolower(com[i]);
    }
    com_t[i] = '\0';

    return strcmp(ch_t, com_t);
}
