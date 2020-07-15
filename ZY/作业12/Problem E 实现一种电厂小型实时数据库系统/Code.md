```c
//GCC

#include <stdio.h>

#include <string.h>

int main(void)
{
	int i, n, t, k, flag, sum_AI, sum_DI;
	float none;
	char stee[10], type[10], name[25];

	while(scanf("%d", &n) != EOF)
	{
        int DI[n];
        float AI[n];
        char expl_AI[n][25], expl_DI[n][25];
        for (i = 0, sum_AI = 0, sum_DI = 0; i < n; i++)
        {
            scanf("%s %s %s", &stee, &type, &name);
            if (type[0] == 'A') {
                for (t = 0, flag = -1; t < sum_AI&&flag == -1; t++)
                {
                    if (strcmp(name, expl_AI[t]) == 0) {
                        flag = t;
                    }
                }
                if (stee[0] == 'I') {
                    if (flag == -1) {
                        strcpy(expl_AI[sum_AI], name);
                        scanf("%f", &AI[sum_AI]);
                        sum_AI++;
                        printf("SUCCESSED\n");
                    }
                    else {
                        scanf("%f", &none);
                        printf("OPERATION ERROR\n");
                    }
                }
                else if (stee[0] == 'Q') {
                    if (flag == -1) {
                        printf("OPERATION ERROR\n");
                    }
                    else {
                        printf("%.3f\n", AI[flag]);
                    }
                }
                else if (stee[0] == 'M') {
                    if (flag == -1) {
                        scanf("%f", &none);
                        printf("OPERATION ERROR\n");
                    }
                    else {
                        scanf("%f", &AI[flag]);
                        printf("SUCCESSED\n");
                    }
                }
                else if (stee[0] == 'D') {
                    if (flag == -1) {
                        printf("OPERATION ERROR\n");
                    }
                    else {
                        for (k = flag; k < sum_AI; k++)
                        {
                            strcpy(expl_AI[k], expl_AI[k + 1]);
                            AI[k] = AI[k + 1];
                        }
                        sum_AI--;
                        printf("SUCCESSED\n");
                    }
                }
            }
            else {
                for (t = 0, flag = -1; t < sum_DI&&flag == -1; t++)
                {
                    if (strcmp(name, expl_DI[t]) == 0) {
                        flag = t;
                    }
                }
                if (stee[0] == 'I') {
                    if (flag == -1) {
                        strcpy(expl_DI[sum_DI], name);
                        scanf("%d", &DI[sum_DI]);
                        sum_DI++;
                        printf("SUCCESSED\n");
                    }
                    else {
                        scanf("%f", &none);
                        printf("OPERATION ERROR\n");
                    }
                }
                else if (stee[0] == 'Q') {
                    if (flag == -1) {
                        printf("OPERATION ERROR\n");
                    }
                    else {
                        printf("%d\n", DI[flag]);
                    }
                }
                else if (stee[0] == 'M') {
                    if (flag == -1) {
                        scanf("%f", &none);
                        printf("OPERATION ERROR\n");
                    }
                    else {
                        scanf("%d", &DI[flag]);
                        printf("SUCCESSED\n");
                    }
                }
                else if (stee[0] == 'D') {
                    if (flag == -1) {
                        printf("OPERATION ERROR\n");
                    }
                    else {
                        for (k = flag; k < sum_DI; k++)
                        {
                            strcpy(expl_DI[k], expl_DI[k + 1]);
                            DI[k] = DI[k + 1];
                        }
                        sum_DI--;
                        printf("SUCCESSED\n");
                    }
                }
            }
        }
	}

	return 0;
}

```

```c++
//G++

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

```
