#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed
{
private:
    int fixed_point_value;
    static const int fractional_bits = 10;
public:
    Fixed();
    Fixed(Fixed &F);
    void operator = (Fixed &F);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};

#endif // !FIXED_H