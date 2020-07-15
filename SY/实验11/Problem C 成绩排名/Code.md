```c
//GCC

#include <stdio.h>

struct result{
	char name[11];
	char number[11];
	int score;
};

int main (void)
{
	int i, n, max, min;

	scanf("%d", &n);
	struct result student[n];

	max = 0;
	min = 0;
	for(i = 0; i < n; i++)
	{
		scanf("%s %s %d", &student[i].name, &student[i].number, &student[i].score);
		if(student[i].score > student[max].score)    max = i;
		if(student[i].score < student[min].score)    min = i;
	}
	printf("%s %s\n", student[max].name, student[max].number);
	printf("%s %s\n", student[min].name, student[min].number);

	return 0;
}

```

```c++
//G++

#include <iostream>

#include <string>

struct Table{
	std::string name;
	std::string number;
	int score;
};

int main (void)
{
	using namespace std;

	int i, n, max, min;

	cin >> n;
	struct Table student[10];

	max = 0;
	min = 0;
	for(i = 0; i < n; i++)
	{
		cin >> student[i].name
			>> student[i].number
			>> student[i].score;
		if(student[i].score > student[max].score)    max = i;
		if(student[i].score < student[min].score)    min = i;
	}
	cout << student[max].name
		 << " "
		 << student[max].number
		 << endl
		 << student[min].name
		 << " "
		 << student[min].number
		 << endl;

	return 0;
}

```
