#include <iostream>

int main (void)
{
    using namespace std;

    int A, B, C;
    char ch[3] = {'A', 'B', 'C'};
    char *ta = ch;

    cin >> A
        >> B
        >> C;
    if(A > B){
        if(A < C)    ta += 2;
    }
    else{
        if(B > C)    ta++;
        else    ta += 2;
    }
    cout << *ta
         << endl;

    return 0;
}
