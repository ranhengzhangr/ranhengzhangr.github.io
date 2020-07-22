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
