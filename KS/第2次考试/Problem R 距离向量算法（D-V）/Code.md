```c
//GCC

#include <stdio.h>

#include <string.h>

int main (void)
{
    int m, n, i, k, fine;

    scanf("%d %d", &m, &n);
    int Old_Range[m], Add_Range[n], New_Range[m + n], flag[m];
    char Old_Sourse[m][3], Add_Sourse[n][3], New_Sourse[m + n][3], Old_Next[m], Add_Next[n], New_Next[m];

    for(i = 0; i < m; i++)
    {
        getchar();
        scanf("%s", &Old_Sourse[i]);
        strcpy(New_Sourse[i], Old_Sourse[i]);
        scanf("%d", &Old_Range[i]);
        New_Range[i] = Old_Range[i];
        getchar();
        scanf("%c", &Old_Next[i]);
        New_Next[i] = Old_Next[i];
    }
    for(i = 0; i < n; i++)
    {
        getchar();
        scanf("%s", &Add_Sourse[i]);
        scanf("%d", &Add_Range[i]);
        Add_Range[i]++;
        getchar();
        scanf("%c", &Add_Next[i]);
        Add_Next[i] = 'C';
    }
    for(i = 0; i < n; i++)
    {
        fine = -1;
        for(k = 0; k < m; k++)
        {
            if(strcmp(New_Sourse[k], Add_Sourse[i]) == 0){
                fine = 1;
                break;
            }
        }
        if(fine == 1){
            if(New_Next[k] == 'C'){
                New_Range[k] = Add_Range[i];
            }
            else{
                if(Add_Range[i] < New_Range[k]){
                    New_Range[k] = Add_Range[i];
                    New_Next[k] = Add_Next[i];
                }
            }
        }
        else{
            for(k = 0, fine = m; k < m; k++)
            {
                if(strcmp(Add_Sourse[i], New_Sourse[k]) < 0){
                    break;
                }
            }
            for(fine = m; fine > k; fine--)
            {
                strcpy(New_Sourse[fine], New_Sourse[fine - 1]);
                New_Range[fine] = New_Range[fine - 1];
                New_Next[fine] = New_Next[fine - 1];
            }
            strcpy(New_Sourse[k], Add_Sourse[i]);
            New_Range[k] = Add_Range[i];
            New_Next[k] = Add_Next[i];
            m++;
        }
    }
    for(i = 0; i < m; i++)
    {
        printf("%s", New_Sourse[i]);
        printf(" %d ", New_Range[i]);
        printf("%c\n", New_Next[i]);
    }

    return 0;
}

```

```c++
//G++

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

```
