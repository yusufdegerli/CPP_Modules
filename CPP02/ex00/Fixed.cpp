#include "Fixed.hpp"


Fixed::Fixed(void)
{
	std::cout<<"Default Constructor called\n";
	number = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout<<"Copy Constructor called\n";
	this->number = other.number;
}

int Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called\n";
	return this->number;
}

void Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called\n";
	this->number = raw;
}
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout<<"Copy Assignmet Operator called\n";
	this->number = other.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout<<"Destructor called \n";
}
