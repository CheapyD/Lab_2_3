#include "FuzzyNumber.h"

int main()
{
	double x, l, r;
	do
	{
		cout << "x = "; cin >> x;
		cout << "l = "; cin >> l;
		cout << "r = "; cin >> r;
	} while (!(x > (x - l) && (x + r) > x));
	
	FuzzyNumber A(x, l, r), B;
	cout << "A = " << A << endl;

	cout << "Size of class: " << sizeof(A) << endl;

	cin >> B;
	cout << "B = " << B << endl;

	FuzzyNumber C = A + B;
	cout << "C = " << C << endl;

	FuzzyNumber D = A * B;
	cout << "D = " << D << endl;

	cout << "++A: " << ++A << endl;
	cout << "--A: " << --A << endl;
	cout << "A++: " << A++ << endl;
	cout << "A--: " << A-- << endl << endl;
}