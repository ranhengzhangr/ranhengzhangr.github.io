```c
//GCC

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

```

```c++
//G++

#include <iostream>

struct Inf{
    int score;
    char name[11];
    char number[11];
};

void read(struct Inf *create);

void write(const struct Inf goal);

int main (void)
{
    using namespace std;

    int i, n;
    struct Inf temp, max, min;

    max.score = 0;
    min.score = 100;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        read(&temp);
        if(temp.score > max.score)    max = temp;
        if(temp.score < min.score)    min = temp;
    }
    write(max);
    write(min);

    return 0;
}

void read(struct Inf *create)
{
    using namespace std;

    cin.get();
    cin >> create->name
        >> create->number
        >> create->score;
}

void write(const struct Inf goal)
{
    using namespace std;

    cout << goal.name
         << " "
         << goal.number
         << endl;
}

```
