```c
//GCC

#include <stdio.h>

int main (void)
{
    int sum[4], sort[4], i, n, t, i0, i1, temp;
    char ch[25];

    while(scanf("%d", &n) != EOF&&n > 0)
    {
        sum[0] = 0, sum[1] = 0, sum[2] = 0, sum[3] = 0;
        sort[0] = 0, sort[1] = 1, sort[2] = 2, sort[3] = 3;
        for(i = 0; i < n; i++)
        {
            getchar();
            scanf("%s", &ch);
            scanf("%d", &t);
            switch(ch[3])
            {
                case 'm': sum[0] += t; break;
                case 'i': sum[1] += t; break;
                case 's': sum[2] += t; break;
                case 'e': sum[3] += t; break;
            }
            for(i0 = 0; i0 < 4; i0++)
            {
                for(i1 = i0 + 1; i1 < 4; i1++)
                {
                    if(sum[sort[i0]] > sum[sort[i1]])
                    {
                        temp = sort[i0], sort[i0] = sort[i1], sort[i1] = temp;
                    }
                }
            }
        }
        for(i = 0; i < 4; i++)
        {
            switch(sort[i])
            {
                case 0: printf("FILM %d\n", sum[sort[i]]); break;
                case 1: printf("SOLI %d\n", sum[sort[i]]); break;
                case 2: printf("SENS %d\n", sum[sort[i]]); break;
                case 3: printf("WIRE %d\n", sum[sort[i]]); break;
            }
        }
    }

    return 0;
}

```

```c++
//G++

#include <iostream>

#include <string>

#include <cctype>

struct electronic {
	char type[5];
	int sum;
};

void quick_sort(struct electronic resistor[], int len);

int main(void)
{
	using namespace std;

	int i, n, k;
	string ch;
	struct electronic resistor[4];

	while (cin >> n&&n != 0)
	{
		resistor[0].type[0] = 'F';
		resistor[0].type[1] = 'I';
		resistor[0].type[2] = 'L';
		resistor[0].type[3] = 'M';
		resistor[0].type[4] = '\0';
		resistor[1].type[0] = 'W';
		resistor[1].type[1] = 'I';
		resistor[1].type[2] = 'R';
		resistor[1].type[3] = 'E';
		resistor[1].type[4] = '\0';
		resistor[2].type[0] = 'S';
		resistor[2].type[1] = 'O';
		resistor[2].type[2] = 'L';
		resistor[2].type[3] = 'I';
		resistor[2].type[4] = '\0';
		resistor[3].type[0] = 'S';
		resistor[3].type[1] = 'E';
		resistor[3].type[2] = 'N';
		resistor[3].type[3] = 'S';
		resistor[3].type[4] = '\0';
		for (i = 0; i < 4; i++)
		{
			resistor[i].sum = 0;
		}
		for (i = 0; i < n; i++)
		{
			cin.get();
			cin >> ch
                >> k;
			switch (toupper(ch[3]))
			{
			case 'M': resistor[0].sum += k; break;
			case 'E': resistor[1].sum += k; break;
			case 'I': resistor[2].sum += k; break;
			case 'S': resistor[3].sum += k; break;
			}
		}
		quick_sort(resistor, 4);
		cout << resistor[0].type
			 << " "
			 << resistor[0].sum
			 << endl
			 << resistor[1].type
			 << " "
			 << resistor[1].sum
			 << endl
			 << resistor[2].type
			 << " "
			 << resistor[2].sum
			 << endl
			 << resistor[3].type
			 << " "
			 << resistor[3].sum
			 << endl;
	}

	return 0;
}

void quick_sort(struct electronic resistor[], int len)
{
	using namespace std;

	int i, k;
	struct electronic mote;

	if (len == 0)    return;
	k = 0;
	for (i = 1; i < len; i++)
	{
		if (resistor[i].sum > resistor[k].sum)    k = i;
	}
	mote = resistor[len - 1];
	resistor[len - 1] = resistor[k];
	resistor[k] = mote;
	quick_sort(resistor, len - 1);
}

```
