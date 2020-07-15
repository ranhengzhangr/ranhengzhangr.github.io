#include <iostream>

int main (void)
{
    using namespace std;

    int k, i1, i2, N1, N2;

    cin >> N1;
    int A1[N1], FLAG_A1[N1];

    for(i1 = 0; i1 < N1; i1++)
    {
        cin >> A1[i1];
        FLAG_A1[i1] = 1;
    }
    cin >> N2;
    int A2[N2], FLAG_A2[N2];

    for(i2 = 0; i2 < N2; i2++)
    {
        cin >> A2[i2];
        FLAG_A2[i2] = 1;
    }
    for(i1 = 0; i1 < N1; i1++)
    {
        for(k = i1 + 1; k < N1; k++)
        {
            while(FLAG_A1[k] == 0&&k < N1)    k++;
            if(A1[i1] == A1[k]){
                FLAG_A1[k] = 0;
            }
        }
        for(i2 = 0; i2 < N2; i2++)
        {
            while(FLAG_A2[i2] == 0&&i2 < N2)    i2++;
            if(A1[i1] == A2[i2]){
                FLAG_A1[i1] = 0;
                FLAG_A2[i2] = 0;
            }
        }
    }
    for(i2 = 0; i2 < N2; i2++)
    {
        for(k = i2 + 1; k < N2; k++)
        {
            while(FLAG_A2[k] == 0&&k < N2)    k++;
            if(A2[i2] == A2[k]){
                FLAG_A2[k] = 0;
            }
        }
    }
    k = 0;
    for(i1 = 0; i1 < N1; i1++)
    {
        if(FLAG_A1[i1] == 1){
            if(k > 0)    cout << " ";
            cout << A1[i1];
            k++;
        }
    }
    for(i2 = 0; i2 < N2; i2++)
    {
        if(FLAG_A2[i2] == 1){
            if(k > 0)    cout << " ";
            cout << A2[i2];
            k++;
        }
    }

    return 0;
}
