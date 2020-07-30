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
