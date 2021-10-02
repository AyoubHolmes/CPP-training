#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_value = 0;
}

Fixed::Fixed(Fixed &F)
{
	std::cout << "Copy constructor called" << std::endl;
	fixed_point_value = F.fixed_point_value;
}

void	Fixed::operator = (Fixed &F)
{
	fixed_point_value = F.fixed_point_value;
}

int		Fixed::getRawBits( void ) const{
	return (fixed_point_value);
}

void	Fixed::setRawBits( int const raw ){

}

Fixed::~Fixed()
{
}
