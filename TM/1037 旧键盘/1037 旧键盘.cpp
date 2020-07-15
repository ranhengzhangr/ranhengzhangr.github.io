#include <iostream>

#include <string>

#include <cctype>

struct Key{
    char button;
    int times;
};

int be, af, space;
std::string before, after;
struct Key digit[10], alpha[26];

void initial();

void digit_qte(struct Key *dig);

void alpha_qte(struct Key *alp);

bool finder(char ch);

int main (void)
{
    using namespace std;

    cin >> before
        >> after;
    initial();
    for(be = 0; be < before.size(); be++)
    {
        if(before[be] == '_'&&space == 0){
            if(!finder('_'))    putchar('_');
        }
        else if(isdigit(before[be])&&digit[before[be] - 48].times == 0){
            digit_qte(&digit[before[be] - 48]);
        }
        else if(isalpha(alpha[toupper(before[be]) - 65].button)&&alpha[toupper(before[be]) - 65].times == 0){
            alpha_qte(&alpha[toupper(before[be]) - 65]);
        }
    }
    cout << endl;

    return 0;
}

void initial()
{
    using namespace std;

    int i;

    af = 0;
    space = 0;
    for(i = 0; i < 10; i++)
    {
        digit[i].button = i + 48;
        digit[i].times = 0;
    }
    for(i = 0; i < 26; i++)
    {
        alpha[i].button = i + 65;
        alpha[i].times = 0;
    }
}

void digit_qte(struct Key *dig)
{
    using namespace std;

    if(!finder(dig->button)){
        putchar(dig->button);
        dig->times = 1;
    }
}

void alpha_qte(struct Key *alp)
{
    using namespace std;

    if(!finder(toupper(alp->button))){
        putchar(toupper(alp->button));
        alp->button = 1;
    }
}

bool finder(char ch)
{
    using namespace std;

    if(toupper(after[af]) != ch)    return false;
    else    while(toupper(after[af]) == ch)    af++;

    return true;
}
