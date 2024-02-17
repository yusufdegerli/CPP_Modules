#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	setRaw(0);
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called\n";
	setRaw(nbr * (1 << louse));
}

Fixed::Fixed(const float nbr)
{
	std::cout <<"Float constructor called\n";
	setRaw(roundf(nbr * (1 << louse)));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout<<"Copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout<<"Copy assignment operator called\n";
	setRaw(other.getRaw());
	std::cout <<"this'in değeri-> "<<*this<<std::endl;
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout<<"Destructor called\n";
}

float Fixed::toFloat(void) const
{
	float tmp = getRaw();
	return (tmp / (1 << louse));
}

int Fixed::toInt(void) const
{
	return (getRaw() / (1 << louse));
}

void	Fixed::setRaw(int raw){
	this->raw = raw;
}

int		Fixed::getRaw() const {
	return (this->raw);
}



std::ostream	&operator<<(std::ostream &out, const Fixed &fixed ){
	out << fixed.toFloat();
	return (out);
}
