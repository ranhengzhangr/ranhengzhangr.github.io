#include <iostream>

struct Persion{
    char name[6];
    int age;
};

bool read(struct Persion *it);

bool judge(struct Persion *it);

int main (void)
{
    using namespace std;

    int i, n, sum = 0;
    struct Persion now, old, young;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        if(read(&now)){
            if(sum == 0){
                old = now;
                young = now;
            }
            else{
                if(old.age > now.age)    old = now;
                if(young.age < now.age)    young = now;
            }
            sum++;
        }
    }
    cout << sum
        << " "
        << old.name
        << " "
        << young.name
        << endl;

    return 0;
}

bool read(struct Persion *it)
{
    using namespace std;

    int year, month, day;

    cin.get();
    cin.getline(it->name, 6, ' ');
    cin >> year;
    cin.get();
    cin >> month;
    cin.get();
    cin >> day;
    it->age = year * 10000 + month * 100 + day;

    return judge(it);
}

bool judge(struct Persion *it)
{
    using namespace std;

    if(20140906 - it->age <= 2000000 && it->age < 20140906)    return true;

    return false;
}
