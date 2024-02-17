#pragma once
#include <iostream>
#include <string>

class Fixed
{
	private:
	int number;
	static const int bit = 8;
	public:
	int getRawBits() const;
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	Fixed();
	void setRawBits(int const raw);
	~Fixed();
};
