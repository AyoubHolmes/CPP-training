#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Bureaucrat"), grade(150)
{
    std::cout << "<< { Default Bureaucrat is created! } >>" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else 
        this->grade = grade;
    std::cout << "<< { The Bureaucrat \"" << name <<  "\" is created! } >>" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b): name(b.name)
{
    *this = b;
    std::cout << "<< { The Bureaucrat \"" << name <<  "\" is created by the copy constructor! } >>" << std::endl;
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &b)
{
    if (this != &b)
        grade = b.grade;
    return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("<--- Grade is too High! --->");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("<--- Grade is too Low! --->");
}

std::string const & Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void    Bureaucrat::incrementGrade()
{
    if (grade == 1)
        throw GradeTooHighException();
    grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (grade == 150)
        throw GradeTooLowException();
    grade++;
}

void    Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << name << " signs " << f.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << name << " cannot sign" << f.getName() <<  " because grade is so low" << std::endl;
    }
}

std::ostream &operator<<(std::ostream& os, Bureaucrat const &B)
{
    os << B.getName() << ", bureaucrat grade " << B.getGrade() << std::endl;
    return (os);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "<< ~ { The Bureaucrat \"" << name <<  "\" is destroyed! } >>" << std::endl;
}
