#include <iostream>

int main (void)
{
    using namespace std;

    int K, T, R, C, RT, FLAG_R;

    cin >> T;
    FLAG_R = 1;
    R = 0;
    C = 0;
    RT = 0;
    for(K = 0; K < T; K++)
    {
        if(K % 10 == 0&&K > 0){
            if(FLAG_R == 1&&R > C){
                FLAG_R = 0;
                RT = K;
            }
            else if(FLAG_R == 0&&K - RT == 30){
                FLAG_R = 1;
            }
        }
        C += 3;
        R += FLAG_R * 9;
    }
    if(R == C){
        cout << "-_- "
             << R;
    }
    else{
        if(R > C){
            cout << "^_^ "
                 << R;
        }
        else{
            cout << "@_@ "
                 << C;
        }
    }
    cout << endl;

    return 0;
}
