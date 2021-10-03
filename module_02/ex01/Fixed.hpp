#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed
{
private:
    int fixed_point_value;
    static const int fractional_bits = 8;
public:
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(Fixed &F);
    Fixed   &operator = (Fixed &F);
    int		getRawBits( void ) const;
    void	setRawBits( int const raw );
    float	toFloat( void ) const;
    int		toInt( void ) const;
    ~Fixed();
};


#endif // !FIXED_H