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
	std::cout << "Assignation operator called" << std::endl;
	fixed_point_value = F.fixed_point_value;
}

int		Fixed::getRawBits( void ) const{
	std::cout << "GetRawbits function called" << std::endl;
	return (fixed_point_value);
}

void	Fixed::setRawBits( int const raw ){
	std::cout << "SetRawbits function called" << std::endl;
	fixed_point_value = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
