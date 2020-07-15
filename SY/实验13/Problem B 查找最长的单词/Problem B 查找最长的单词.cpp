#include <iostream>

#include <cstdlib>

#include <cstring>

int read_color(char **color);

char **find_max_len(char **s, int n);

int main (void)
{
    using namespace std;

    int n;
    char *color[150], **ans;

    n = read_color(color);
    ans = find_max_len(color, n);
    cout << *ans
        << endl;

    return 0;
}

int read_color(char **color)
{
    using namespace std;

    int n;
    char *new_color;

    n = 0;
    new_color = new char[21];
    while(cin >> new_color&&strcmp(new_color, "#") != 0)
    {
        color[n] = new char[21];
        strcpy(color[n], new_color);
        n++;
    }

    return n;
}

char **find_max_len(char **s, int n)
{
    using namespace std;

    int i;
    char **p;

    *p = new char[21];
    *p = s[0];
    for(i = 0; i < n; i++)
    {
        if(strlen(s[i]) > strlen(*p))    *p = s[i];
    }

    return p;
}
