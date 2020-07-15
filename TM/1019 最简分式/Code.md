```c
//GCC

#include <stdio.h>

int main (void)
{
    int a, b, c, x, y;

    scanf("%d/%d", &a, &b);
    x = a, y = b;
    if(a < b){
        c = a, a = b, b = c;
    }
    while(b != 0)
    {
        a %= b;
        if(a < b){
            c = a, a = b, b = c;
        }
        c = a;
    }
    x /= c, y/= c;
    printf("%d/%d\n", x, y);

    return 0;
}

```

```c++
//G++

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

```
