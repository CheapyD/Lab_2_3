#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class FuzzyNumber
{
private:
	double x, l, r;

public:
	FuzzyNumber();
	FuzzyNumber(double x, double l, double r);
	FuzzyNumber(const FuzzyNumber& v);
	~FuzzyNumber();

	double GetX() const { return x; }
	double GetL() const { return l; }
	double GetR() const { return r; }

	void SetX(double value) { x = value; }
	void SetL(double value) { l = value; }
	void SetR(double value) { r = value; }

	FuzzyNumber& operator =(const FuzzyNumber& n);
	operator string() const;

	FuzzyNumber& operator --();
	FuzzyNumber& operator ++();
	FuzzyNumber operator --(int);
	FuzzyNumber operator ++(int);

	friend FuzzyNumber operator + (FuzzyNumber a, FuzzyNumber b);
	friend FuzzyNumber operator * (FuzzyNumber a, FuzzyNumber b);

	friend ostream& operator <<(ostream& out, const FuzzyNumber& a);
	friend istream& operator >>(istream& in, FuzzyNumber& a);

};

