```c
//GCC

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

struct word{
    char vaule;
    struct word *next;
};

int main (void)
{
    int shift = 1;
    char ch;
    struct word *list = NULL, *prev, *cur;

    while((ch = getchar()) != '\n')
    {
        if(ch == ','||ch == '.'||ch == '-'||ch == '+'){
            shift = 0;
        }
        for(prev = NULL, cur = list; cur != NULL; prev = cur, cur = cur->next);
        struct word *new_word;

        new_word = malloc(sizeof(struct word));
        new_word->vaule = ch;
        if(prev == NULL){
            new_word->next = list;
            list = new_word;
        }
        else{
            new_word->next = prev->next;
            prev->next = new_word;
        }
    }
    while((ch = getchar()) != '\n')
    {
        for(prev = list; prev != NULL&&prev->vaule != toupper(ch); prev = prev->next);
        if(prev == NULL){
            if(isalpha(ch)){
                if(!(isupper(ch)&&shift == 0))    putchar(ch);
            }
            else{
                putchar(ch);
            }
        }
    }
    printf("\n");

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <cctype>

struct word{
    char code;
    struct word *next;
};

int main (void)
{
    using namespace std;

    int shift = 1;
    char ch;
    struct word *list = nullptr, *prev, *cur;

    while((ch = cin.get()) != '\n')
    {
        if(ch >= '+'&&ch <= '.')    shift = 0;
        for(prev = nullptr, cur = list; cur != nullptr; prev = cur, cur = cur->next);
        struct word *new_word;

        new_word = new struct word;
        new_word->code = ch;
        if(prev == nullptr){
            new_word->next = list;
            list = new_word;
        }
        else{
            new_word->next = prev->next;
            prev->next = new_word;
        }
    }
    while((ch = cin.get()) != '\n')
    {
        for(prev = list; prev != nullptr&&prev->code != toupper(ch); prev = prev->next);
        if(prev == nullptr){
            if(!(isupper(ch)&&shift == 0)){
                cout.put(ch);
            }
        }
    }
    cout << endl;

    return 0;
}

```
