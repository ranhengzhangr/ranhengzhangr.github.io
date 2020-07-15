```c
//GCC

#include <stdio.h>

struct date{
	int year;
	int month;
	int day;
};

int compare_dates(struct date d1, struct date d2);

int main (void)
{
	int flag;
	struct date d1, d2;

	scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
	scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);
	flag = compare_dates(d1, d2);
	if(flag == 0){
		printf("%d/%d/%d is equal!\n", d1.month, d1.day, d1.year);
	}
	else{
		if(flag == 1){
			printf("%d/%d/%d", d1.month, d1.day, d1.year);
		}
		else{
			printf("%d/%d/%d", d2.month, d2.day, d2.year);
		}
		printf(" is earlier!\n");
	}

	return 0;
}

int compare_dates(struct date d1, struct date d2)
{
	if(d1.year == d2.year){
		if(d1.month == d2.month){
			if(d1.day == d2.day){
				return 0;
			}
			else{
				if(d1.day < d2.day)    return 1;
				else    return -1;
			}
		}
		else{
			if(d1.month < d2.month)    return 1;
			else    return -1;
		}
	}
	else{
		if(d1.year < d2.year)    return 1;
		else    return -1;
	}
}

```

```c++
//G++

#include <iostream>

struct date{
	int month;
	int day;
	int year;
};

int compare_dates(struct date d1, struct date d2);

int main (void)
{
	using namespace std;

	int flag;
	struct date d1, d2;

	cin >> d1.month;
	cin.get();
	cin >> d1.day;
	cin.get();
	cin >> d1.year;
	cin >> d2.month;
	cin.get();
	cin >> d2.day;
	cin.get();
	cin >> d2.year;
	flag = compare_dates(d1, d2);
	if(flag == 0){
		cout << d1.month
			 << "/"
			 << d1.day
			 << "/"
			 << d1.year
			 << " is equal!"
			 << endl;
	}
	else{
		if(flag == 1){
			cout << d2.month
				 << "/"
				 << d2.day
				 << "/"
				 << d2.year;
		}
		else{
			cout << d1.month
				 << "/"
				 << d1.day
				 << "/"
				 << d1.year;
		}
		cout << " is earlier!";
	}
	cout << endl;

	return 0;
}

int compare_dates(struct date d1, struct date d2)
{
	using namespace std;

	long int a, b;

	a = d1.day + d1.month * 31 + d1.year * 372;
	b = d2.day + d2.month * 31 + d2.year * 372;
	if(a == b){
		return 0;
	}
	else{
		if(a < b)    return -1;
		else    return 1;
	}
}

```
