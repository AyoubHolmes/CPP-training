#include "Fixed.hpp"
#include <iostream>

int main( void ) {
Fixed a;
Fixed f(2.5f);
Fixed s(0.5f);
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;
std::cout << Fixed(s / f) << " " << (0.5f / 2.5f) << std::endl;
return 0;
}