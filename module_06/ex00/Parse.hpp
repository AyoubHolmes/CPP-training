#ifndef PARSE_HPP
#define PARSE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <limits>
#include <typeinfo>
#include <exception>

class Parse
{
private:
    std::string parse;
    char    c;
    int     n;
    float   f;
    double  d;
    bool is_converted;

public:
    
    Parse();
    Parse(std::string);
    Parse(Parse &);
    Parse operator= (Parse &);
    char getC() const;
    int  getN() const;
    float getF() const;
    double getD() const;
    bool getConverted() const;
    std::string getParse();
    void setParse(std::string);
    void convert();
    class NotConvertedYetException: public std::exception
    {
        const char* what() const throw();
    };
    class NotValidArgumentException: public std::exception
    {
        const char* what() const throw();
    };
    ~Parse();
};

std::ostream &operator<<(std::ostream&, Parse const &); 

#endif // !PARSE_HPP