#pragma once
#include <string>
#include <iostream>

class Ratio
{
public:
	Ratio(int n, int d);
	
	int getNumerator();
	int getDenominator();

	void setNumerator(int numerator_);
	void setDenominator(int denominator_);

	Ratio operator*(Ratio& rhs);

	Ratio operator/(Ratio& rhs);

	bool operator==(Ratio& rhs);

	bool operator!=(Ratio& rhs);

	bool operator<(Ratio& rhs);

	bool operator>(Ratio& rhs);

	bool operator<=(Ratio& rhs);

	bool operator>=(Ratio& rhs);

	Ratio operator^(int st);

	Ratio operator~();


	std::string to_string();
private:
	Ratio& operator=(Ratio& rhs) = default;
	int numerator;
	int denominator;
};
std::ostream& operator<<(std::ostream& os, Ratio& ratio);

