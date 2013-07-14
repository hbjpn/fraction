#pragma once

class Fraction
{
	int _numerator;
	int _denominator;
public:
	Fraction(int numerator, int denominator) throw(const char*);
	int numer() const;
	int denom() const;
	void reduce();
protected:
	static int gcd(int m, int n);
};

Fraction operator+(const Fraction& l, const Fraction& r);
Fraction operator-(const Fraction& l, const Fraction& r);
Fraction operator*(const Fraction& l, const Fraction& r);
Fraction operator/(const Fraction& l, const Fraction& r);
bool operator==(const Fraction& l, const Fraction& r);
bool operator>(const Fraction& l, const Fraction& r);
bool operator>=(const Fraction& l, const Fraction& r);
bool operator<(const Fraction& l, const Fraction& r);
bool operator<=(const Fraction& l, const Fraction& r);

#include<ostream>
std::ostream& operator<<(std::ostream& os, const Fraction& f);