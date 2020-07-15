#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int read_color(char **color);

char **find_max_len(const char **s, int n);

int main (void)
{
    int n;
    char *color[150], **ans;

    n = read_color(color);
    ans = find_max_len(color, n);
    printf("%s\n", *ans);

    return 0;
}

int read_color(char **color)
{
    int n;
    char ch[25];

    n = 0;
    while(scanf("%s", &ch) != EOF&&strcmp(ch, "#") != 0)
    {
        *(color + n) = malloc(21 * sizeof(char));
        strcpy(*(color + n), ch);
        n++;
    }

    return n;
}

char **find_max_len(const char **s, int n)
{
    int i;
    char **ans = s;

    for(i = 0; i < n; i++)
    {
        if(strlen(*(s + i)) > strlen(*ans)){
            ans = s + i;
        }
    }

    return ans;
}
