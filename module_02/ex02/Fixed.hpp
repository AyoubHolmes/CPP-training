#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>
class Fixed
{
private:
    int                 fixed_point_value;
    static const int    fractional_bits = 8;
public:
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(Fixed const &F);
    Fixed                   &operator = (Fixed const &F);
    bool                    operator > (Fixed const &F);
    bool                    operator < (Fixed const &F);
    bool                    operator >= (Fixed const &F);
    bool                    operator <= (Fixed const &F);
    bool                    operator == (Fixed const &F);
    bool                    operator != (Fixed const &F);
    Fixed                   operator + (Fixed const &F2);
    Fixed                   operator * (Fixed const &F2);
    Fixed                   operator - (Fixed const &F2);
    Fixed                   operator / (Fixed const &F2);
    Fixed                   operator ++ (int);
    Fixed                   operator ++ (); 
    Fixed                   operator -- ();
    Fixed                   operator -- (int);
    static Fixed            &min(Fixed&, Fixed&);
    static const Fixed      &min(const Fixed&, const Fixed&);
    static const Fixed      &max(const Fixed&, const Fixed&);
    static Fixed            &max(Fixed&, Fixed&);
    int                     getRawBits( void ) const;
    void                    setRawBits( int const raw );
    float	                toFloat( void ) const;
    int		                toInt( void ) const;
    ~Fixed();
};

std::ostream &operator<<(std::ostream& os, Fixed const & F); 

#endif // !FIXED_H