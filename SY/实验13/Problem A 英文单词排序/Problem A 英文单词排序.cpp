#include <iostream>

#include <cstdlib>

#include <cstring>

void insert(char *word[], char *prev, int n);

void print_word(char *word[], int n);

int main (void)
{
    using namespace std;

    int n;
    char *word[150], *prev;

    prev = new char[21];
    n = 0;
    while(cin >> prev&&strcmp(prev, "#") != 0)
    {
        insert(word, prev, n);
        n++;
    }
    print_word(word, n);

    return 0;
}

void insert(char *word[], char *prev, int n)
{
    using namespace std;

    int i, k;

    for(k = 0; k < n&&strlen(prev) > strlen(word[k]); k++);
    word[n] = new char[21];
    for(i = n; i > k; i--)
    {
        strcpy(word[i], word[i - 1]);
    }
    strcpy(word[k], prev);
}

void print_word(char *word[], int n)
{
    using namespace std;

    int i;

    for(i = 0; i < n; i++)
    {
        if(i > 0)    cout << " ";
        cout << word[i];
    }
}
