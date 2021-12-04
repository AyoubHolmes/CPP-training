#include "Parse.hpp"

Parse::Parse(): parse("")
{
    std::cout << "Default Parse Object" << std::endl;
    is_converted = false;
}

Parse::Parse(std::string str): parse(str)
{
    std::cout << "Parse \"" << str << "\" Object" << std::endl;
    is_converted = false;
}

Parse::Parse(Parse &p): parse(p.parse)
{
    std::cout << "{ Copy Constructor } => Parse \"" << p.parse << "\" Object" << std::endl;
    is_converted = false;
}

Parse   Parse::operator= (Parse &p)
{
    if (this != &p)
        parse = p.parse;
    return (*this);
}

std::string Parse::getParse() const
{
    return (parse);
}

void Parse::setParse(std::string str)
{
    parse = str;
    is_converted = false;
}

const char* Parse::NotConvertedYetException::what() const throw()
{
    return ("<-- The Value is not converted yet! -->");
}

const char* Parse::NotValidArgumentException::what() const throw()
{
    return ("The argument is not valid");
}

void    Parse::convert()
{
    std::string::size_type sz = 0;
    if (((parse[0] >= '0' && parse[0] <= '9') || parse[0] == '+' || parse[0] == '-') && parse.length() >= 1)
    {
        size_t dotpos = parse.find(".");
        size_t fpos = parse.find("f");
    
        if (dotpos != std::string::npos && parse.find_last_of(".") == dotpos)
        {
            if (fpos != std::string::npos && fpos == parse.length() - 1)
            {
                f = std::stof(parse, &sz);
                /* if (sz != parse.length())
                    throw NotValidArgumentException(); */
                c = static_cast<char>(f);
                n = static_cast<int>(f);
                d = static_cast<double>(f);
                is_converted = true;
            }
            else if (fpos == std::string::npos)
            {
                d = std::stod(parse, &sz);
                if (sz != parse.length())
                    throw NotValidArgumentException();
                c = static_cast<char>(d);
                n = static_cast<int>(d);
                f = static_cast<float>(d);
                is_converted = true;
            }
            else
                throw NotValidArgumentException();
        }
        else if (dotpos == std::string::npos && fpos == std::string::npos)
        {
            n = std::stoi(parse, &sz);
            if (sz != parse.length())
                throw NotValidArgumentException();
            c = static_cast<char>(n);
            f = static_cast<float>(n);
            d = static_cast<double>(n);
            is_converted = true;
        }
        else
            throw NotValidArgumentException();
    }
    else if (parse.length() == 1)
    {
        c = parse[0];
        n = static_cast<int>(c);
        f = static_cast<float>(n);
        d = static_cast<double>(n);
        is_converted = true;
    }
    else
        throw NotValidArgumentException();
}

char Parse::getC() const
{
    return (c);
}

int Parse::getN() const
{
    return (n);
}

float Parse::getF() const
{
    return (f);
}

double Parse::getD() const
{
    return (d);
}

bool Parse::getConverted() const
{
    return (is_converted);
}

std::ostream &operator<<(std::ostream& os, Parse const &p)
{
    if (p.getConverted() == false)
        throw Parse::NotConvertedYetException();
    size_t dotpos = p.getParse().find(".");
    os << "char: " << p.getC() <<  std::endl;
    os << "int: " << p.getN() <<  std::endl;
    os << std::fixed;
    os << "float: "<< std::setprecision(p.getParse().length() - dotpos - 1) << p.getF() << "f" <<  std::endl;
    os << "double: " << p.getD() <<  std::endl;
    return (os);
}

Parse::~Parse()
{
}
