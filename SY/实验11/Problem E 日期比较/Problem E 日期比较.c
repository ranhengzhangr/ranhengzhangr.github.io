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
