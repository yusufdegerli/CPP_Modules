#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
	static const int louse = 8;
	int				nbr;
	public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();
	int getRawBits(void) const;
	Fixed(const int nbr);
	Fixed(const float nbr);
	void setRaw(int nbr);
	int getRaw() const;
	int toInt(void) const;
	float toFloat(void) const;
	Fixed operator + (Fixed const &other) const;
	Fixed operator - (Fixed const &other) const;
	Fixed operator * (Fixed const &other) const;
	Fixed operator / (Fixed const &other) const;
	bool operator > (Fixed const &other) const;
	bool operator < (Fixed const &other) const;
	bool operator == (Fixed const &other) const;
	bool operator != (Fixed const &other) const;
	bool operator <= (Fixed const &other) const;
	bool operator >= (Fixed const &other) const;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	static Fixed min(Fixed &nbr1, Fixed &nbr2);
	static Fixed min(const Fixed& nbr1, const Fixed& nbr2);
	static Fixed max(Fixed &nbr1, Fixed &nbr2);
	static Fixed max(const Fixed& nbr1, const Fixed& nbr2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
