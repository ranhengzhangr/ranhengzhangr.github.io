#include <iostream>

#include <iomanip>

struct Time{
	int h;
	int m;
	char moon[5];
};

struct Plane{
	struct Time departure;
	struct Time arriving;
};

void print(struct Plane target);

int modulu(int n);

int main (void)
{
    using namespace std;

	int a, b, i, k, my_h, my_m;
	struct Plane board[] =
	{
		{
			{8, 0, "a.m."}, {10, 16, "a.m."}
		},
		{
			{9, 43, "a.m."}, {11, 52, "a.m."}
		},
		{
			{11, 19, "a.m."}, {1, 31, "p.m."}
		},
		{
			{12, 47, "p.m."}, {3, 0, "p.m."}
		},
		{
			{14, 0, "p.m."}, {4, 8, "p.m."}
		},
		{
			{15, 45, "p.m."}, {5, 55, "p.m."}
		},
		{
			{19, 0, "p.m."}, {9, 20, "p.m."}
		},
		{
			{21, 45, "p.m."}, {11, 58, "p.m."}
		}
	};

	cin >> my_h;
	cin.get();
    cin >> my_m;
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
	if(modulu((board[a].departure.h * 60 + board[a].departure.m) - (my_h * 60 + my_m)) > modulu((board[b].departure.h * 60 + board[b].departure.m) - (my_h * 60 + my_m)))    k = b;
	else    k = a;
	print(board[k]);

	return 0;
}

void print(struct Plane target)
{
    using namespace std;

	while(target.departure.h > 12)    target.departure.h -= 12;
	cout << "departure time: "
         << target.departure.h
         << ":"
         << noshowpos
         << setw(2)
         << right
         << setfill('0')
         << target.departure.m
         << " "
         << target.departure.moon
         << endl
         << "arriving time: "
         << target.arriving.h
         << ":"
         << noshowpos
         << setw(2)
         << right
         << setfill('0')
         << target.arriving.m
         << " "
         << target.arriving.moon
         << endl;
}

int modulu(int n)
{
    using namespace std;

	if(n < 0)    n = -n;

	return n;
}
