/**
 * 
 * Copyright (C) 2012-2013 Hiroyuki Baba, All Rights Reserved.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License or any
 * later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR POURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#pragma once

class Fraction
{
	/**
	 * Numerator
	 */
	int _numerator;
	
	/**
	 * Denominator
	 */
	int _denominator;
public:
	/**
	 * Constructor
	 *
	 * @param numerator Numerator
	 * @param denominator Denominator(>0)
	 */
	Fraction(int numerator, int denominator) throw(const char*);
	
	/**
	 * Get numerator
	 */
	int numer() const;
	
	/**
	 * Get denominator
	 */
	int denom() const;
	
	/**
	 * Do reduction
	 */
	void reduce();
protected:

	/**
	 * Get gcd of integer m and n
	 */
	static int gcd(int m, int n);
};

Fraction operator+(const Fraction& l, const Fraction& r);
Fraction operator-(const Fraction& l, const Fraction& r);
Fraction operator*(const Fraction& l, const Fraction& r);
Fraction operator/(const Fraction& l, const Fraction& r);

Fraction operator+(const Fraction& l, const int& r);
Fraction operator-(const Fraction& l, const int& r);
Fraction operator*(const Fraction& l, const int& r);
Fraction operator/(const Fraction& l, const int& r);

Fraction operator+(const int& l, const Fraction& r);
Fraction operator-(const int& l, const Fraction& r);
Fraction operator*(const int& l, const Fraction& r);
Fraction operator/(const int& l, const Fraction& r);

bool operator==(const Fraction& l, const Fraction& r);
bool operator>(const Fraction& l, const Fraction& r);
bool operator>=(const Fraction& l, const Fraction& r);
bool operator<(const Fraction& l, const Fraction& r);
bool operator<=(const Fraction& l, const Fraction& r);

bool operator==(const Fraction& l, const int& r);
bool operator>(const Fraction& l, const int& r);
bool operator>=(const Fraction& l, const int& r);
bool operator<(const Fraction& l, const int& r);
bool operator<=(const Fraction& l, const int& r);


bool operator==(const int& l, const Fraction& r);
bool operator>(const int& l, const Fraction& r);
bool operator>=(const int& l, const Fraction& r);
bool operator<(const int& l, const Fraction& r);
bool operator<=(const int& l, const Fraction& r);


#include<ostream>
std::ostream& operator<<(std::ostream& os, const Fraction& f);
