#include <iostream>

#include <cstring>

struct complex{
	int t1;
	int t2;
	int t3;
	int t4;
};

struct complex calculate(struct complex IP, struct complex sub);

int mod_and(int a, int b);

int main(void)
{
	using namespace std;

	struct complex addres, IP, sub;

	while(cin >> IP.t1)
	{
		cin.get();
		cin >> IP.t2;
		cin.get();
		cin >> IP.t3;
		cin.get();
		cin >> IP.t4;
		cin >> sub.t1;
		cin.get();
		cin >> sub.t2;
		cin.get();
		cin >> sub.t3;
		cin.get();
		cin >> sub.t4;
		addres = calculate(IP, sub);
		cout << addres.t1
			 << " "
		 	 << addres.t2
			 << " "
			 << addres.t3
			 << " "
			 << addres.t4
			 << endl;
	}

	return 0;
}

struct complex calculate(struct complex IP, struct complex sub)
{
	using namespace std;

	struct complex address;

	address.t1 = mod_and(IP.t1, sub.t1);
	address.t2 = mod_and(IP.t2, sub.t2);
	address.t3 = mod_and(IP.t3, sub.t3);
	address.t4 = mod_and(IP.t4, sub.t4);

	return address;
}

int mod_and(int a, int b)
{
	using namespace std;

	int i, k, c;
	char cha[32], chb[32], chc[32], add[2] = {'0', '\0'};

	for(i = 0; i < 32; i++)
	{
		cha[i] = a % 2 + 48;
		a /= 2;
	}
	for(i = 0; i < 32; i++)
	{
		chb[i] = b % 2 + 48;
		b /= 2;
	}
	for(i = 0; i < 32; i++)
	{
		if(cha[i] - 48 == 1&&chb[i] - 48 == 1){
			chc[i] = '1';
		}
		else{
			chc[i] = '0';
		}
	}
	for(i = 0, k = 1, c = 0; i < 32; i++, k *= 2)
	{
		c += (chc[i] - 48) * k;
	}

	return c;
}
