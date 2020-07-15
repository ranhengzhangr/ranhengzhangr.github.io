#include <iostream>

#include <cstring>

#define MAX 10000

int main (void)
{
    using namespace std;

    int i, k, t, sum;
    char stand[MAX], comer[MAX];

    cin.getline(stand, MAX, '\n');
    cin.getline(comer, MAX, '\n');
    t = 0;
    for(i = 0; i <= strlen(comer) - strlen(stand); i++)
    {
        sum = 0;
        for(k = 0; k < strlen(stand); k++)
        {
            if(comer[i + k] != stand[k])    sum++;
        }
        if(sum == 0){
            if(t > 0)    cout << " ";
            cout << i;
            t++;
        }
    }

    return 0;
}
