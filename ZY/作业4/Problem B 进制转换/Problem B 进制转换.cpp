#include <iostream>

#include <cstring>

int main (void)
{
    using namespace std;

    int i, N, R, flag;
    char ch;

    while(cin >> N >> R)
    {
        char T[(N + 1) / 2];

        if(N < 0){
            flag = 1;
            N = -N;
        }
        else{
            flag = 0;
        }
        i = 0;
        while(N > 0)
        {
            switch(N % R)
            {
                case 0: T[i] = '0'; break;
                case 1: T[i] = '1'; break;
                case 2: T[i] = '2'; break;
                case 3: T[i] = '3'; break;
                case 4: T[i] = '4'; break;
                case 5: T[i] = '5'; break;
                case 6: T[i] = '6'; break;
                case 7: T[i] = '7'; break;
                case 8: T[i] = '8'; break;
                case 9: T[i] = '9'; break;
                case 10: T[i] = 'A'; break;
                case 11: T[i] = 'B'; break;
                case 12: T[i] = 'C'; break;
                case 13: T[i] = 'D'; break;
                case 14: T[i] = 'E'; break;
                case 15: T[i] = 'F'; break;
            }
            N /= R;
            i++;
        }
        T[i] = '\0';
        for(i = 0; i < strlen(T) / 2; i++)
        {
            ch = T[i];
            T[i] = T[strlen(T) - i - 1];
            T[strlen(T) - i - 1] = ch;
        }
        if(flag == 1)    cout << "-";
        cout << T
             << endl;
    }

    return 0;
}
