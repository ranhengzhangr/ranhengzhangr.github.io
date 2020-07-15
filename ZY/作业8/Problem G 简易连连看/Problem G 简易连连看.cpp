#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, t, k, l, w, x, y, x1, x2, y1, y2;

    cin >> n;
    n *= 2;
    char chess[n][n];

    for(x = 0; x < n; x++)
    {
        for(y = 0; y < n; y++)
        {
            cin.get();
            cin >> chess[x][y];
        }
    }
    cin >> k;
    w = 0;
    l = n * n / 2;
    for(i = 0; i < k&&l > 0; i++)
    {
        cin >> x1
            >> y1
            >> x2
            >> y2;
        x1--;
        x2--;
        y1--;
        y2--;
        if(chess[x1][y1] == chess[x2][y2]&&chess[x1][y1] != '*'){
            chess[x1][y1] = '*';
            chess[x2][y2] = '*';
            l--;
            if(l > 0){
                for(x = 0; x < n; x++)
                {
                    for(y = 0; y < n; y++)
                    {
                        if(y > 0)    cout << " ";
                        cout << chess[x][y];
                    }
                    cout << endl;
                }
            }
        }
        else{
            cout << "Uh-oh"
                 << endl;
            w++;
            if(w == 3){
                cout << "Game Over";
                break;
            }
        }
    }
    if(w < 3)    cout << "Congratulations!";
    cout << endl;

    return 0;
}
