#include <iostream>

void read(unsigned int *p);

bool judge(unsigned int *A, unsigned int *B, unsigned int *C);

int main (void)
{
    using namespace std;

    int i, n;
    unsigned int IP[4], ANR[4], WEB[4];

    read(IP);
    read(ANR);
    cin >> n;
    for(i = 0; i < n; i++)
    {
        read(WEB);
        if(judge(IP, ANR, WEB)){
            cout << "YES"
                 << endl;
        }
        else{
            cout << "NO"
                 << endl;
        }
    }
}

void read(unsigned int *p)
{
    using namespace std;

    int i;

    for(i = 0; i < 4; i++, p++)
    {
        if(i > 0)    cin.get();
        cin >> *p;
    }
}

bool judge(unsigned int *A, unsigned int *B, unsigned int *C)
{
    using namespace std;

    int i;

    for(i = 0; i < 4; i++, A++, B++, C++)
    {
        if((*A & *B) != (*B & *C))    return false;
    }

    return true;
}
