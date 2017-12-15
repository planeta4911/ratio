#include "Head.h"

Ratio::Ratio(int n, int d)
{
	numerator = n;
	denominator = d;
}

	int Ratio::getNumerator() { return numerator; }
	int Ratio::getDenominator() { return denominator; }

	void Ratio::setNumerator(int numerator_) { numerator = numerator_; }
	void Ratio::setDenominator(int denominator_) { denominator = denominator_; }

	Ratio Ratio::operator*(Ratio& rhs)
	{
		int newNum = numerator * rhs.numerator;
		int newDen = denominator * rhs.denominator;
		return Ratio(newNum, newDen);
	}

	Ratio Ratio::operator/(Ratio& rhs)
	{
		int newNum = numerator * rhs.denominator;
		int newDen = denominator * rhs.numerator;
		return Ratio(newNum, newDen);
	}

	bool Ratio::operator==(Ratio& rhs)
	{
		float n1 = float(numerator) / float(denominator);
		float n2 = float(rhs.numerator) / float(rhs.denominator);
		return n1 == n2;
	}

	bool Ratio::operator!=(Ratio& rhs)
	{
		float n1 = float(numerator) / float(denominator);
		float n2 = float(rhs.numerator) / float(rhs.denominator);
		return n1 != n2;
	}

	bool Ratio::operator<(Ratio& rhs)
	{
		float n1 = float(numerator) / float(denominator);
		float n2 = float(rhs.numerator) / float(rhs.denominator);
		return n1 < n2;
	}

	bool Ratio::operator>(Ratio& rhs)
	{
		float n1 = float(numerator) / float(denominator);
		float n2 = float(rhs.numerator) / float(rhs.denominator);
		return n1 > n2;
	}

	bool Ratio::operator<=(Ratio& rhs)
	{
		float n1 = float(numerator) / float(denominator);
		float n2 = float(rhs.numerator) / float(rhs.denominator);
		return n1 <= n2;
	}

	bool Ratio::operator>=(Ratio& rhs)
	{
		float n1 = float(numerator) / float(denominator);
		float n2 = float(rhs.numerator) / float(rhs.denominator);
		return n1 >= n2;
	}
	//. ::

	Ratio Ratio::operator^(int st)
	{
		return Ratio(pow(numerator, st), pow(denominator, st));
	}

	Ratio Ratio::operator~()
	{
		return Ratio(denominator, numerator);
	}


	std::string Ratio::to_string()
	{
		std::string text;
		text += std::to_string(numerator);
		text += "/";
		text += std::to_string(denominator);
		return text;
	}

	std::ostream& operator<<(std::ostream& os, Ratio& ratio)
	{
		return os << ratio.to_string();
	}

