```c
//GCC

#include <stdio.h>

#include <string.h>

int main (void)
{
    int i, k, m, n, fose;

    scanf("%d %d", &m, &n);
    int Purpose_Number[m], Sourse_Number[n];
    char MAC_Address[m][15], Purpose_Address[n][15], Sourse_Address[n][15];
    for(i = 0; i < m; i++)
    {
        getchar();
        scanf("%s", &MAC_Address[i]);
        scanf("%d %d", &Purpose_Number[i], &fose);
    }
    for(i = 0; i < n; i++)
    {
        getchar();
        scanf("%s", &Purpose_Address[i]);
        getchar();
        scanf("%s", &Sourse_Address[i]);
        scanf("%d %d", &Sourse_Number[i], &fose);
    }
    for(i = 0; i < n; i++)
    {
        printf("%s", Purpose_Address[i]);
        printf("    ");
        for(k = 0, fose = 0; k < m; k++)
        {
            if(strcmp(MAC_Address[k], Purpose_Address[i]) == 0){
                fose = 1;
                if(Purpose_Number[k] == Sourse_Number[i]){
                    printf("NONE\n");
                }
                else{
                    printf("%d\n", Purpose_Number[k]);
                }
            }
        }
        if(fose == 0){
            printf("ALL\n");
        }
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <string>

int main(void)
{
	using namespace std;

	int i, k, m, n;

	cin >> m
		>> n;
	struct table{
		string address;
		int number;
		int time;
	}BOOK[10];
	struct frame{
		string target;
		string source;
		int number;
		int time;
	}ADMIT[10];

	for(i = 0; i < m; i++)
	{
		cin.get();
		cin >> BOOK[i].address
			>> BOOK[i].number
			>> BOOK[i].time;
	}
	for(i = 0; i < n; i++)
	{
		cin.get();
		cin >> ADMIT[i].target
			>> ADMIT[i].source
			>> ADMIT[i].number
			>> ADMIT[i].time;
	}
	for(i = 0; i < n; i++)
	{
		cout << ADMIT[i].target
			 << "    ";
		for(k = 0; k < m; k++)
		{
			if(ADMIT[i].target == BOOK[k].address)    break;
		}
		if(k == m){
			cout << "ALL";
		}
		else{
			if(ADMIT[i].number == BOOK[k].number){
				cout << "NONE";
			}
			else{
				cout << BOOK[k].number;
			}
		}
		cout << endl;
	}

	return 0;
}

```
