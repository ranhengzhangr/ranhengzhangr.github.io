#include <iostream>

#include <iomanip>

#include <string>

#include <cstring>

int main (void)
{
    using namespace std;

    int i, n, k, sum, flag;
    float none;
    char T_type[3];
    string action, T_name;
    struct data{
        char type[3];
        std::string name;
        int DI = 0;
        float AI = 0;
    };

    while(cin >> n)
    {
        struct data pool[n];

        cin.get();
        sum = 0;
        for(i = 0; i < n; i++)
        {
            cin >> action
                >> T_type
                >> T_name;
            flag = 0;
            for(k = 0; k < sum; k++)
            {
                if(T_name == pool[k].name&&strcmp(T_type, pool[k].type) == 0){
                    flag = 1;
                    break;
                }
            }
            if(action[0] == 'D'){
                if(flag == 0){
                    cout << "OPERATION ERROR";
                }
                else{
                    for(; k < sum - 1; k++)
                    {
                        pool[k] = pool[k + 1];
                    }
                    sum--;
                    cout << "SUCCESSED";
                }
            }
            else if(action[0] == 'Q'){
                if(flag == 0){
                    cout << "OPERATION ERROR";
                }
                else{
                    if(T_type[0] == 'D'){
                        cout << pool[k].DI;
                    }
                    else{
                        cout << fixed
                             << setprecision(3)
                             << pool[k].AI;
                    }
                }
            }
            else if(action[0] == 'M'){
                if(flag == 0){
                    cin >> none;
                    cout << "OPERATION ERROR";
                }
                else{
                    if(T_type[0] == 'D')    cin >> pool[k].DI;
                    else    cin >> pool[k].AI;
                    cout << "SUCCESSED";
                }
                cin.get();
            }
            else{
                if(flag == 1){
                    cin >> none;
                    cout << "OPERATION ERROR";
                }
                else{
                    strcpy(pool[sum].type, T_type);
                    pool[sum].name = T_name;
                    if(T_type[0] == 'D')    cin >> pool[sum].DI;
                    else    cin >> pool[sum].AI;
                    cout << "SUCCESSED";
                }
                cin.get();
                sum++;
            }
            cout << endl;
        }
    }

    return 0;
}
