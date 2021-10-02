#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed
{
private:
    int fixed_point_value;
    static const int fractional_bits = 8;
public:
    Fixed(/* args */);
    Fixed(Fixed &F);
    void operator = (Fixed F);
    ~Fixed();
};

Fixed::Fixed(/* args */)
{
}

Fixed::~Fixed()
{
}


#endif // !FIXED_H