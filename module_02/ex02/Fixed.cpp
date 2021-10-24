#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	fixed_point_value = 0;
}

Fixed::Fixed(const int val)
{
	// std::cout << "Default constructor called" << std::endl;
	fixed_point_value = val << Fixed::fractional_bits;
}

Fixed::Fixed(const float val)
{
	// std::cout << "Default constructor called" << std::endl;
	fixed_point_value = round(val * (1 << Fixed::fractional_bits));
}

Fixed::Fixed(Fixed const &F)
{
	// std::cout << "Copy constructor called" << std::endl;
	fixed_point_value = F.fixed_point_value;
}

Fixed     &Fixed::operator = (Fixed const &F)
{
	// std::cout << "Assignation operator called" << std::endl;
	fixed_point_value = F.fixed_point_value;
	return (*this);
}

bool	Fixed::operator > (Fixed const &F) {
	return (fixed_point_value > F.fixed_point_value);
}

bool	Fixed::operator < (Fixed const &F) {
	return (fixed_point_value < F.fixed_point_value);
}

bool	Fixed::operator >= (Fixed const &F) {
	return (fixed_point_value >= F.fixed_point_value);
}

bool	Fixed::operator <= (Fixed const &F) {
	return (fixed_point_value <= F.fixed_point_value);
}

bool	Fixed::operator == (Fixed const &F) {
	return (fixed_point_value == F.fixed_point_value);
}

bool	Fixed::operator != (Fixed const &F) {
	return (fixed_point_value != F.fixed_point_value);
}

Fixed    Fixed::operator + (Fixed const &F2)
{
	Fixed F3; 
	F3.fixed_point_value = this->fixed_point_value + F2.getRawBits();
	return (F3);
}

Fixed    Fixed::operator * (Fixed const &F2)
{
	Fixed F3;
	F3.fixed_point_value = (this->fixed_point_value * F2.getRawBits());
	F3.fixed_point_value = F3.toInt();
	return (F3);
}

Fixed    Fixed::operator - (Fixed const &F2)
{
	Fixed F3;
	F3.fixed_point_value = (this->fixed_point_value - F2.getRawBits());
	return (F3);
}


Fixed    Fixed::operator / (Fixed const &F2)
{
	Fixed F3 (this->fixed_point_value / F2.getRawBits());
	return (F3);
}

int		Fixed::getRawBits( void ) const{
	return (fixed_point_value);
}

void	Fixed::setRawBits( int const raw ){
	fixed_point_value = raw;
}

float	Fixed::toFloat( void ) const{
	return ((float)fixed_point_value / (1 << Fixed::fractional_bits));
}

int		Fixed::toInt( void ) const{
	return ((int)fixed_point_value / (1 << Fixed::fractional_bits));
}

Fixed     Fixed::operator ++ ()
{
	fixed_point_value++;
	return (*this);
}

Fixed     Fixed::operator ++ (int)
{
	Fixed tmp;

	tmp.fixed_point_value = fixed_point_value;
	++fixed_point_value;
	return (tmp);
}


Fixed     Fixed::operator -- (int)
{
	Fixed tmp;

	tmp.fixed_point_value = fixed_point_value;
	--fixed_point_value;
	return (tmp);
}

Fixed     Fixed::operator -- ()
{
	--fixed_point_value;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, Fixed const & F) {
	os << F.toFloat();
	return (os);
}
Fixed    &Fixed::min(Fixed &F1, Fixed &F2)
{
	if (F1 >= F2)
		return (F2);
	return (F1);
}

const Fixed    &Fixed::min(const Fixed &F1, const Fixed &F2)
{
	if ((Fixed&)F1 >= (Fixed&)F2)
		return (F2);
	return (F1);
}

Fixed    &Fixed::max(Fixed &F1, Fixed &F2)
{
	if (F1 <= F2)
		return (F2);
	return (F1);
}

const Fixed    &Fixed::max(const Fixed &F1, const Fixed &F2)
{
	if ((Fixed&)F1 <= (Fixed&)F2)
		return (F2);
	return (F1);
}


Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}