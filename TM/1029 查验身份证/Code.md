```c
//GCC

#include <stdio.h>

int main (void)
{
    const int Weight[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    const char Code[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int i, k, n, passer, function;
    char ID[19];

    ID[18] = '\0';
    while(scanf("%d", &n) != EOF)
    {
        passer = 0;
        for(i = 0; i < n; i++)
        {
            function = 0;
            getchar();
            for(k = 0; k < 17; k++)
            {
                ID[k] = getchar();
                function += (ID[k] - 48) * Weight[k];
            }
            ID[k] = getchar();
            if(ID[k] == Code[function % 11]){
                passer++;
            }
            else{
                printf("%s\n", ID);
            }
        }
        if(passer == n){
            printf("All passed\n");
        }
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

int weighter(char ID[]);

bool judge();

int main (void)
{
    using namespace std;

    int i, n, passer;

    while(cin >> n)
    {
        cin.get();
        passer = 0;
        for(i = 0; i < n; i++)
        {
            if(judge()){
                passer++;
            }
        }
        if(passer == n){
            cout << "All passed"
                 << endl;
        }
    }

    return 0;
}

int weighter(char ID[])
{
    using namespace std;

    const int Weight[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    int i, function;

    function = 0;
    for(i = 0; i < 17; i++)
    {
        function += (ID[i] - 48) * Weight[i];
    }

    return function;
}

bool judge()
{
    using namespace std;

    const char Code[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int function;
    char ID[19];

    cin.getline(ID, 19);
    function = weighter(ID);
    if(ID[17] == Code[function % 11]){
        return true;
    }
    else{
        cout << ID
             << endl;
        return false;
    }
}

```
