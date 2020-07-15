#include <iostream>

struct Fraction{
	int lower;
	int upper;
};

struct Fraction reduce(struct Fraction a);

int main (void)
{
	using namespace std;

	struct Fraction a, b;

	cin >> a.upper;
	cin.get();
	cin >> a.lower;
	b = reduce(a);
	cout << b.upper
		<< "/"
		<< b.lower
		<< endl;

	return 0;
}

struct Fraction reduce(struct Fraction a)
{
	using namespace std;

	int p, q, t, mote;
	struct Fraction b;

	b = a;
	if(a.lower > a.upper){
		p = a.lower;
		q = a.upper;
	}
	else{
		p = a.upper;
		q = a.lower;
	}
	while(q > 0)
	{
		p %= q;
		t = q;
		if(p < q){
			mote = p;
			p = q;
			q = mote;
		}
	}
	b.lower /= t;
	b.upper /= t;

	return b;
}
