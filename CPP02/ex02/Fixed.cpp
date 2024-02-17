#include "Fixed.hpp"
//Default Constructor/Destructor
Fixed::Fixed(){	this->nbr = 0;}
Fixed::~Fixed(){}

int Fixed::getRaw() const {return this->nbr;}//Get
void	Fixed::setRaw(int nbr){this->nbr = nbr;}//Set

Fixed::Fixed(const Fixed &fixed){*this = fixed;}


int Fixed::getRawBits(void) const{return this->nbr;}

Fixed::Fixed(const int nbr){setRaw(nbr *(1 << louse));}

Fixed::Fixed(const float nbr){setRaw(roundf(nbr * (1 << louse)));}

float Fixed::toFloat(void) const
{
	float tmp = getRaw();
	return (tmp / (1 << louse));
}

int Fixed::toInt(void) const{return (getRaw() / (1 << louse));}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out<<fixed.toFloat();
	return (out);
}
/*Dört işlem operatörleri burada*/
Fixed Fixed::operator / (Fixed const &other) const {return Fixed(this->toFloat() / other.toFloat());}
Fixed Fixed::operator * (Fixed const &other) const {return Fixed(this->toFloat() * other.toFloat());}
Fixed Fixed::operator + (Fixed const &other) const {return Fixed(this->toFloat() + other.toFloat());}
Fixed Fixed::operator - (Fixed const &other) const {return Fixed(this->toFloat() - other.toFloat());}
/*Dört işlem operatörleri burada*/

/*Operatör sorguları*/
bool Fixed::operator > (Fixed const &other) const
{
	if(this->toFloat() > other.toFloat())
		return true;
	return false;
}
bool Fixed::operator < (Fixed const &other) const
{
	return this->toFloat() < other.toFloat();
}
bool Fixed::operator == (Fixed const &other) const
{
	if(this->toFloat() == other.toFloat())
		return true;
	return false;
}
bool Fixed::operator != (Fixed const &other) const
{
	if(this->toFloat() != other.toFloat())
		return true;
	return false;
}
bool Fixed::operator <= (Fixed const &other) const
{
	if(this->toFloat() <= other.toFloat())
		return true;
	return false;
}
bool Fixed::operator >= (Fixed const &other) const
{
	if(this->toFloat() >= other.toFloat())
		return true;
	return false;
}
/*Operatör sorguları*/


/*Arttırma ve Azalma*/
Fixed& Fixed::operator++(){++nbr; return *this;}
Fixed& Fixed::operator--(){--nbr; return *this;}
Fixed Fixed::operator++(int)
{
	Fixed temp(toFloat());
	++nbr;
	return temp;
}
Fixed Fixed::operator--(int)
{
	Fixed temp(toFloat());
	--nbr;
	return temp;
}
/*Arttırma ve Azalma*/

/*Max or Min*/
Fixed Fixed::min(Fixed &nbr1, Fixed &nbr2)
{
	if(nbr1 < nbr2)
		return Fixed(nbr1);
	return Fixed(nbr2);
}

Fixed Fixed::min(const Fixed& nbr1, const Fixed& nbr2)
{
	if(nbr1 < nbr2)
		return Fixed(nbr1);
	return Fixed(nbr2);
}

Fixed Fixed::max(Fixed &nbr1, Fixed &nbr2)
{
	if(nbr2 > nbr1)
		return Fixed(nbr2);
	return Fixed(nbr1);
}

Fixed Fixed::max(const Fixed &nbr1, const Fixed &nbr2)
{
	if(nbr2 > nbr1)
		return Fixed(nbr2);
	return Fixed(nbr1);
}
/*Max or Min*/
