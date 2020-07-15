#include <iostream>

#include <cstring>

struct RIP{
	char targ[3];
	int dist;
	char next;
};

struct RIP reader(void);

void addnew(struct RIP Table[], struct RIP adder, int m);

int main(void)
{
	using namespace std;

	int i, k, m, n;

	cin >> m
		>> n;
	struct RIP Table[10], read;

	for(i = 0; i < m; i++)
	{
		Table[i] = reader();
	}
	for(i = 0; i < n; i++)
	{
		read = reader();
		read.next = 'C';
		read.dist++;
		for(k = 0; k < m; k++)
		{
			if(strcmp(read.targ, Table[k].targ) == 0)    break;
		}
		if(k == m){
			addnew(Table, read, m);
			m++;
		}
		else{
			if(Table[k].next == 'C'){
				Table[k] = read;
			}
			else{
				if(read.dist < Table[k].dist){
					Table[k] = read;
				}
			}
		}
	}
	for(i = 0; i < m; i++)
	{
		cout << Table[i].targ
			 << " "
			 << Table[i].dist
			 << " "
			 << Table[i].next
			 << endl;
	}

	return 0;
}

struct RIP reader(void)
{
	using namespace std;

	struct RIP read;

	cin.get();
	cin >> read.targ
		>> read.dist;
	cin.get();
	cin >> read.next;

	return read;
}

void addnew(struct RIP Table[], struct RIP adder, int m)
{
	using namespace std;

	int i, k;

	for(i = 0; i < m; i++)
	{
		if(strcmp(adder.targ, Table[i].targ) < 0)    break;
	}
	for(k = m; k > i; k--)
	{
		Table[k] = Table[k - 1];
	}
	Table[i] = adder;
}
