#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		static const int	louse = 8;
		int					raw;
	public:
		Fixed();
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
		void	setRaw(int raw);
		int		getRaw() const;

};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed );
