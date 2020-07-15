#include <iostream>

struct compete{
    int team;
    int score;
    struct compete *next;
};

struct compete *list = nullptr;

void build();

void index(int new_team, int new_score);

void print(struct compete *target);

struct compete *find();

int main (void)
{
    using namespace std;

    struct compete *p;

    build();
    p = find();
    print(p);

    return 0;
}

void build()
{
    using namespace std;

    int i, n, new_team, new_score;
    struct compete *p;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> new_team
            >> new_score;
        for(p = list; p != nullptr && p->team != new_team; p = p->next);
        if(p == nullptr){
            index(new_team, new_score);
        }
        else{
            p->score += new_score;
        }
    }
}

void index(int new_team, int new_score)
{
    using namespace std;

    struct compete *prev, *cur, *new_compete;

    new_compete = new struct compete;
    new_compete->team = new_team;
    new_compete->score = new_score;
    for(prev = nullptr, cur = list; cur != nullptr; prev = cur, cur = cur->next);
    if(prev == nullptr){
        new_compete->next = list;
        list = new_compete;
    }
    else{
        new_compete->next = prev->next;
        prev->next = new_compete;
    }
}

void print(struct compete *target)
{
    using namespace std;

    cout << target->team
        << " "
        << target->score
        << endl;
}

struct compete *find()
{
    using namespace std;

    struct compete *p;

    for(p = list; list != nullptr; list = list->next)
    {
        if(list->score > p->score)    p = list;
    }

    return p;
}
