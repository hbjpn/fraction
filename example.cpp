#include <iostream>
#include "fraction.h"

int main()
{
	Fraction f0( 4,5);
	Fraction f1(-3,4);
	Fraction f2( 4,6);
	
	std::cout
		<< f0+f1 << std::endl
		<< f0-f1 << std::endl
		<< f0*f1 << std::endl
		<< f0/f1 << std::endl
		<< (f0 > f2) << std::endl
		<< (f0 < f2) << std::endl;
	
	return 0;
}
