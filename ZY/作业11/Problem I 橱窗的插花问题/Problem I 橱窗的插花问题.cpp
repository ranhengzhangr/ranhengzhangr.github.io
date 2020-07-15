#include <iostream>

int main (void)
{
    using namespace std;

    int i, v, f, t, n, best, tase;

    cin >> v
        >> f;
    int p[f][v], a[f], k[f], y[v];

    best = 0;
    for(i = 0; i < f; i++)
    {
        for(t = 0; t < v; t++)
        {
            cin >> p[i][t];
        }
        best += p[i][i];
        k[i] = i;
    }
    a[0] = -1;
    i = 0;
    while(i >= 0)
    {
        a[i]++;
        if(a[i] == v){
            i--;
            continue;
        }
        t = 1;
        while(t > 0&&a[i] < v)
        {
            t = 0;
            for(n = 0; n < i; n++)
            {
                if(a[n] == a[i])    t++;
            }
            if(t != 0)    a[i]++;
        }
        if(a[i] == v){
            i--;
            continue;
        }
        if(i == f - 1){
            tase = 0;
            for(n = 0; n < f; n++)
            {
                tase += p[n][a[n]];
            }
            if(tase > best){
                best = tase;
                for(n = 0; n < f; n++)
                {
                    k[n] = a[n];
                }
            }
            continue;
        }
        i++;
        a[i] = -1;
    }
    for(i = 0; i < v; i++)
    {
        y[i] = 0;
    }
    for(i = 0; i < f; i++)
    {
        y[k[i]] = i + 1;
    }
    cout << "best = "
         << best
         << endl;
    for(i = v - 1; i >= 0; i--)
    {
        cout << y[i];
    }

    return 0;
}
