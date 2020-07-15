#include <stdio.h>

struct Time{
	int h;
	int m;
	char moon[5];
};

struct Plane{
	struct Time departure;
	struct Time arriving;
};

void cout(struct Plane target);

int modulus(int n);

int main (void)
{
	int a, b, i, k, my_h, my_m;
	struct Plane board[] =
	{
		{{8, 0, "a.m."}, {10, 16, "a.m."}},
		{{9, 43, "a.m."}, {11, 52, "a.m."}},
		{{11, 19, "a.m."}, {1, 31, "p.m."}},
		{{12, 47, "p.m."}, {3, 0, "p.m."}},
		{{14, 0, "p.m."}, {4, 8, "p.m."}},
		{{15, 45, "p.m."}, {5, 55, "p.m."}},
		{{19, 0, "p.m."}, {9, 20, "p.m."}},
		{{21, 45, "p.m."}, {11, 58, "p.m."}}
	};

	scanf("%d:%d", &my_h, &my_m);
	for(i = 0; i < 8; i++)
	{
		if((board[i].departure.h * 60 + board[i].departure.m) - (my_h * 60 + my_m) > 0)    break;
	}
	a = i - 1;
	b = i;
	if(a == -1 || b == 8){
		if(a == -1){
			a = 7;
			my_h += 24;
		}
		if(b == 8){
			b = 0;
		}
		board[b].departure.h += 24;
	}
	if(modulus((board[a].departure.h * 60 + board[a].departure.m) - (my_h * 60 + my_m)) > modulus((board[b].departure.h * 60 + board[b].departure.m) - (my_h * 60 + my_m)))    k = b;
	else    k = a;
	cout(board[k]);

	return 0;
}

void cout(struct Plane target)
{
	while(target.departure.h > 12)    target.departure.h -= 12;
	printf("departure time: %d:", target.departure.h);
	if(target.departure.m < 10)    printf("0");
	printf("%d %s\n", target.departure.m, target.departure.moon);
	printf("arriving time: %d:", target.arriving.h);
	if(target.arriving.m < 10)    printf("0");
	printf("%d %s\n", target.arriving.m, target.arriving.moon);
}

int modulus(int n)
{
	if(n < 0)    n = -n;

	return n;
}
