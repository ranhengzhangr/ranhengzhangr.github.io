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
