```c
//GCC

#include <stdio.h>

#include <string.h>

void put_Source_Mac_Address(char ch[]);

void put_Ports(char ch[]);

void put_Source_Mac_Address(char ch[])
{
    int i, len;

    len = strlen(ch);
    for(i = 0; i < 18; i++)
    {
        if(i < len){
            putchar(ch[i]);
        }
        else{
            putchar(' ');
        }
    }
}

void put_Ports(char ch[])
{
    int i, len;

    len = strlen(ch);
    for(i = 0; i < 8; i++)
    {
        if(i < len){
            putchar(ch[i]);
        }
        else{
            putchar(' ');
        }
    }
}

int main (void)
{
    int i, i0, i1, i2, fose, ocea[24];
    char Mac_Address[24][15], Source_Mac_Address[24][15], Ports[24][4], Time[24][4], acen[24][15], ch[15];

    for(i = 0; i < 24&&scanf("%s", &Mac_Address[i]) != EOF; i++)
    {
        getchar();
        scanf("%s", &Source_Mac_Address[i]);
        getchar();
        scanf("%s", &Ports[i]);
        getchar();
        scanf("%s", &Time[i]);
        ocea[i] = i;
        strcpy(acen[i], Source_Mac_Address[i]);
    }
    for(i1 = 0; i1 < i; i1++)
    {
        for(i2 = i1 + 1; i2 < i; i2++)
        {
            if(strcmp(acen[i1], acen[i2]) > 0){
                strcpy(ch, acen[i1]), strcpy(acen[i1], acen[i2]), strcpy(acen[i2], ch);
                fose = ocea[i1], ocea[i1] = ocea[i2], ocea[i2] = fose;
            }
        }
    }
    printf("Mac Address       Ports   Time\n");
    for(i0 = 0; i0 < i; i0++)
    {
        put_Source_Mac_Address(Source_Mac_Address[ocea[i0]]);
        put_Ports(Ports[ocea[i0]]);
        printf("%s\n", Time[ocea[i0]]);
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <string>

struct MAC{
	std::string Source;
	std::string Address;
	std::string Ports;
	std::string Time;
};

void quick_sort(struct MAC Mail[], int len);

int main(void)
{
	using namespace std;

	int i, k, t;
	struct MAC Mail[24];

	for(i = 0; i < 24&&cin >> Mail[i].Source; i++)
	{
		cin >> Mail[i].Address
			>> Mail[i].Ports
			>> Mail[i].Time;
	}
	cout << "Mac Address       Ports   Time"
		 << endl;
	quick_sort(Mail, i);
	for(k = 0; k < i; k++)
	{
		for(t = 0; t < 18; t++)
		{
			if(t < Mail[k].Address.size()){
				cout << Mail[k].Address[t];
			}
			else{
				cout << " ";
			}
		}
		for(t = 0; t < 8; t++)
		{
			if(t < Mail[k].Ports.size()){
				cout << Mail[k].Ports[t];
			}
			else{
				cout << " ";
			}
		}
		cout << Mail[k].Time
			 << endl;
	}

	return 0;
}

void quick_sort(struct MAC Mail[], int len)
{
	using namespace std;

	int i, k;
	struct MAC mote;

	if(len <= 1)    return;
	k = 0;
	for(i = 1; i < len; i++)
	{
		if(Mail[i].Source > Mail[k].Source)    k = i;
	}
	mote = Mail[len - 1];
	Mail[len - 1] = Mail[k];
	Mail[k] = mote;
	quick_sort(Mail, len - 1);
}

```
