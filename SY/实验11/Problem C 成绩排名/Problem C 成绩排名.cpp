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
