#include <iostream>

int main (void)
{
    using namespace std;

    int k[9], t, i, x, y;
    char board[8][9];

    for(i = 0; i < 8; i++)
    {
        cin >> board[i];
    }
    k[0] = -1;
    i = 0;
    while(i >= 0)
    {
        if(i == 8)    break;
        for(; ; )
        {
            t = 0;
            k[i]++;
            while(board[i][k[i]] == '#')    k[i]++;
            if(k[i] == 8){
                k[i] = -1;
                break;
            }
            for(x = i - 1; x >= 0; x--)
            {
                if(k[i] == k[x]){
                    t++;
                    break;
                }
            }
            if(t == 0){
                    for(x = i - 1, y = k[i] - 1; x >= 0&&y >= 0; x--, y--)
                {
                    if(y == k[x]){
                        t++;
                        break;
                    }
                }
            }
            if(t == 0){
                for(x = i - 1, y = k[i] + 1; x >= 0&&y < 8; x--, y++)
                {
                    if(y == k[x]){
                        t++;
                        break;
                    }
                }
            }
            if(t == 0)    break;
        }
        if(k[i] == -1){
            i--;
            continue;
        }
        k[i + 1] = -1;
        i++;
    }
    for(i = 0; i < 8; i++)
    {
        cout << k[i] + 1;
    }
    cout << endl;

    return 0;
}
