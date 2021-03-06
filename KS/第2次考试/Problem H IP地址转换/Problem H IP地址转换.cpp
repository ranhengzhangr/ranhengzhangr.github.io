#include <iostream>

void read(unsigned int *p);

void print(unsigned int *p);

int main (void)
{
    using namespace std;

    unsigned int IP[4];

    read(IP);
    print(IP);

    return 0;
}

void read(unsigned int *p)
{
    using namespace std;

    int i, k;

    for(i = 0; i < 4; i++, p++)
    {
        *p = 0;
        for(k = 0; k < 8; k++)
        {
            *p += cin.get() - 48;
            *p *= 2;
        }
        *p /= 2 ;
    }
}

void print(unsigned int *p)
{
    using namespace std;

    int i;

    for(i = 0; i < 4; i++, p++)
    {
        if(i > 0)    cout << ".";
        cout << *p;
    }
}
