#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_value = 0;
}

Fixed::Fixed(const int val)
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_value = val << Fixed::fractional_bits;
}

Fixed::Fixed(const float val)
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_value = round(val * (1 << Fixed::fractional_bits));
}

Fixed::Fixed(Fixed &F)
{
	std::cout << "Copy constructor called" << std::endl;
	fixed_point_value = F.fixed_point_value;
}

Fixed     &Fixed::operator = (Fixed &F)
{
	std::cout << "Assignation operator called" << std::endl;
	fixed_point_value = F.fixed_point_value;
	return (*this);
}

bool	Fixed::operator > (Fixed &F) {
	return (fixed_point_value > F.fixed_point_value);
}

bool	Fixed::operator < (Fixed &F) {
	return (fixed_point_value < F.fixed_point_value);
}

bool	Fixed::operator >= (Fixed &F) {
	return (fixed_point_value >= F.fixed_point_value);
}

bool	Fixed::operator <= (Fixed &F) {
	return (fixed_point_value <= F.fixed_point_value);
}

bool	Fixed::operator == (Fixed &F) {
	return (fixed_point_value == F.fixed_point_value);
}

bool	Fixed::operator != (Fixed &F) {
	return (fixed_point_value != F.fixed_point_value);
}

int		Fixed::getRawBits( void ) const{
	return (fixed_point_value);
}

void	Fixed::setRawBits( int const raw ){
	fixed_point_value = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
