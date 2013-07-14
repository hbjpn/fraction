#include "fraction.h"

Fraction::Fraction(int numerator, int denominator) throw(const char*)
	: _numerator(numerator), _denominator(denominator)
{
	if(_denominator <= 0) throw "Denominator should be grater than 0";
	reduce();
}

int Fraction::numer() const
{
	return _numerator;
}

int Fraction::denom() const
{
	return _denominator;
}

void Fraction::reduce()
{
	int d = gcd((_numerator >= 0 ? _numerator : -_numerator), _denominator);
	_numerator /= d;
	_denominator /= d;
}

int Fraction::gcd(int m, int n)
{
	if(m < n) return gcd(n, m);
	if(n == 0) return m;
	return gcd(n, m % n);
}

Fraction operator+(const Fraction& l, const Fraction& r)
{
	return Fraction(
		l.numer()*r.denom() + l.denom()*r.numer(),
		l.denom()*r.denom());
}

Fraction operator-(const Fraction& l, const Fraction& r)
{
	return Fraction(
		l.numer()*r.denom() - l.denom()*r.numer(),
		l.denom()*r.denom());
}


Fraction operator*(const Fraction& l, const Fraction& r)
{
	return Fraction(l.numer()*r.numer(), l.denom()*r.denom());
}

Fraction operator/(const Fraction& l, const Fraction& r)
{
	return Fraction(
		l.numer()*r.denom()*(r.numer()<0?-1:1),
		l.denom()*(r.numer()>0?r.numer():-r.numer()));
}


bool operator==(const Fraction& l, const Fraction& r)
{
	return (l.numer() == r.numer() && l.denom() == r.denom());
}

bool operator>(const Fraction& l, const Fraction& r)
{
	return (l - r).numer() > 0;
}

bool operator>=(const Fraction& l, const Fraction& r)
{
	return (l - r).numer() >= 0;
}

bool operator<(const Fraction& l, const Fraction& r)
{
	return (l - r).numer() < 0;
}

bool operator<=(const Fraction& l, const Fraction& r)
{
	return (l - r).numer() <= 0;
}

std::ostream& operator<<(std::ostream& os, const Fraction& f)
{
	return ( os << f.numer() << '/' << f.denom() );
}
