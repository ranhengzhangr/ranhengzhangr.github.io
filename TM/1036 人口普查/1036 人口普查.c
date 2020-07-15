#include <stdio.h>

struct Persion{
    char name[6];
    int age;
};

void read(struct Persion *it);

int main (void)
{
    int i, n, sum = 0;
    struct Persion now, oldest, youngest;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        read(&now);
        if(20140906 - now.age <= 2000000&&20190906 - now.age > 0){
            if(sum == 0){
                oldest = now;
                youngest = now;
            }
            else{
                if(now.age < oldest.age)    oldest = now;
                if(now.age > youngest.age)    youngest = now;
            }
            sum++;
        }
    }
    printf("%d %s %s\n", sum, oldest.name, youngest.name);

    return 0;
}

void read(struct Persion *it)
{
    int year, month, day;

    getchar();
    scanf("%s %d/%d/%d", &it->name, &year, &month, &day);
    it->age = year * 10000 + month * 100 + day;
}
