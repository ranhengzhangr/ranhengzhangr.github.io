#include <iostream>

int mark(const char stra[], const char strb[]);

int main (void)
{
    using namespace std;

    int i, score = 0;
    char AA[5][21], BB[5][21];

    for(i = 0; i < 5; i++)    cin >> AA[i];
    for(i = 0; i < 5; i++)    cin >> BB[i];
    for(i = 0; i < 5; i++)
    {
        score += mark(AA[i], BB[i]) * 4;
    }
    cout << score
         << endl;

    return 0;
}

int mark(const char stra[], const char strb[])
{
    using namespace std;

    int i, k, n, sum = 0;

    for(i = 0; i < 5; i++)
    {
        for(k = 0, n = 0; k < 4; k++)
        {
            if(stra[i * 4 + k] == strb[i * 4 + k])    n++;
        }
        if(n == 4)    sum++;
    }

    return sum;
}
