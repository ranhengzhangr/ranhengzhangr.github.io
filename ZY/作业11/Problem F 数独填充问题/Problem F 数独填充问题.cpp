#include <iostream>

int main (void)
{
    using namespace std;

    int i, n, k, x, y, ix, iy, tx, ty, sum, num, flag[4];
    char sudoku[4][5];

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin.get();
        for(k = 0; k < 4; k++)
        {
            cin >> sudoku[k];
        }
        sum = 4;
        x = 0;
        y = 0;
        for(; sum > 0; x++)
        {
            if(x == 4)    x = 0;
            for(y = 0; y < 4; y++)
            {
                if(sudoku[x][y] == '*'){
                    for(k = 0; k < 4; k++)
                    {
                        flag[k] = 1;
                    }
                    for(ix = 0, iy = y; ix < 4; ix++)
                    {
                        switch(sudoku[ix][iy])
                        {
                            case '1': flag[0] = 0; break;
                            case '2': flag[1] = 0; break;
                            case '3': flag[2] = 0; break;
                            case '4': flag[3] = 0; break;
                            default: break;
                        }
                    }
                    for(ix = x, iy = 0; iy < 4; iy++)
                    {
                        switch(sudoku[ix][iy])
                        {
                            case '1': flag[0] = 0; break;
                            case '2': flag[1] = 0; break;
                            case '3': flag[2] = 0; break;
                            case '4': flag[3] = 0; break;
                            default: break;
                        }
                    }
                    if(x < 2)    tx = -1;
                    else    tx = 1;
                    if(y < 2)    ty = -1;
                    else    ty = 1;
                    for(ix = 1; ix < 3; ix++)
                    {
                        for(iy = 1; iy < 3; iy++)
                        {
                            switch(sudoku[ix + tx][iy + ty])
                            {
                                case '1': flag[0] = 0; break;
                                case '2': flag[1] = 0; break;
                                case '3': flag[2] = 0; break;
                                case '4': flag[3] = 0; break;
                                default: break;
                            }
                        }
                    }
                    num = 0;
                    for(k = 0; k < 4; k++)
                    {
                        num += flag[k];
                    }
                    if(num == 1){
                        for(k = 0; k < 4; k++)
                        {
                            if(flag[k] == 1)    break;
                        }
                        switch(k)
                        {
                            case 0: sudoku[x][y] = '1'; break;
                            case 1: sudoku[x][y] = '2'; break;
                            case 2: sudoku[x][y] = '3'; break;
                            case 3: sudoku[x][y] = '4'; break;
                        }
                        sum--;
                    }
                }
            }
        }
        if(i > 0)    cout << endl;
        cout << "Case #"
             << i + 1
             << ":"
             << endl;
        for(k = 0; k < 4; k++)
        {
            cout << sudoku[k]
                 << endl;
        }
    }

    return 0;
}
