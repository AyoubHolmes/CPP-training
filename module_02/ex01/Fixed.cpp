#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_value = 0;
}

Fixed::Fixed(const int val)
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_value = val << fractional_bits;
}

Fixed::Fixed(const float val)
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_value = roundf(val * (1 << fractional_bits));
}

Fixed::Fixed(Fixed const &F)  {
	std::cout << "Copy constructor called" << std::endl;
	fixed_point_value = F.fixed_point_value;
}

Fixed     &Fixed::operator = (Fixed const &F)
{
	std::cout << "Assignation operator called" << std::endl;
	fixed_point_value = F.fixed_point_value;
	return (*this);
}

int		Fixed::getRawBits( void ) const{
	return (fixed_point_value);
}

void	Fixed::setRawBits( int const raw ){
	fixed_point_value = raw;
}

float	Fixed::toFloat( void ) const{
	return ((float)fixed_point_value / (1 << fractional_bits));
}

int		Fixed::toInt( void ) const{
	return ((int)fixed_point_value / (1 << fractional_bits));
}

std::ostream &operator<<(std::ostream& os, Fixed const & F) {
	os << F.toFloat();
	return (os);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
