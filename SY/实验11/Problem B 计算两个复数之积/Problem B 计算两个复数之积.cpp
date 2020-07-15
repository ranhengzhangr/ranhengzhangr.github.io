#include <iostream>

struct complex{
	int real;
	int imag;
};

struct complex multiply(struct complex x, struct complex y);

int main (void)
{
	using namespace std;

	struct complex x, y, z;

	cin >> x.real
		>> x.imag
		>> y.real
		>> y.imag;
	z = multiply(x, y);
	cout << "("
		 << x.real
		 << " + "
		 << x.imag
		 << "i) * ("
		 << y.real
		 << " + "
		 << y.imag
		 << "i) = "
		 << z.real
		 << " + "
		 << z.imag
		 << "i"
		 << endl;

	return 0;
}

struct complex multiply(struct complex x, struct complex y)
{
	using namespace std;

	struct complex z;

	z.real = x.real * y.real - x.imag * y.imag;
	z.imag = x.real * y.imag + x.imag * y.real;

	return z;
}
