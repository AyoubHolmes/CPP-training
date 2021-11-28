#include "Form.hpp"

Form::Form(): name("Form"), grade_sign(150), grade_execute(150)
{
    std::cout << "<< { Default Form is created! } >>" << std::endl;
}

Form::Form(std::string name, int grade_sign, int grade_execute): name(name), grade_sign(grade_sign), grade_execute(grade_execute)
{
    is_signed = false;
    std::cout << "<< { The Form \"" << name << "\" is created! } >>" << std::endl;
}

Form::Form(const Form &b): name(b.name), grade_sign(b.grade_sign), grade_execute(b.grade_execute)
{
    *this = b;
    std::cout << "<< { The Form \"" << name <<  "\" is created by the copy constructor! } >>" << std::endl;
}

Form &Form::operator= (const Form &b)
{
    if (this != &b)
        is_signed = b.is_signed;
    return (*this);
}

std::string const & Form::getName() const
{
    return (name);
}

int const & Form::getSignGrade() const
{
    return (grade_sign);
}

int const & Form::getExecuteGrade() const
{
    return (grade_execute);
}

bool const & Form::isSigned() const
{
    return (is_signed);
}

 void Form::beSigned(Bureaucrat &b)
 {
     if (b.getGrade() <= grade_sign)
        is_signed = true;
    else
        throw GradeTooLowException();
 }

const char* Form::GradeTooHighException::what() const throw()
{
    return ("<--- Form Grade is too High! --->");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("<--- Form Grade is too Low! --->");
}

void Form::execute(Bureaucrat const & executor)
{
    if (executor.getGrade() < grade_execute)
        throw GradeTooLowException();
    // std::cout << "< -- " << executor.getName() << " -- > executes " << name << std::endl;
    if (!is_signed)
        std::cout << "Form is not signed yet!" << std::endl;
    else
        action();
}

Form::~Form()
{
    std::cout << "<< ~ { The Form \"" << name <<  "\" is destroyed! } >>" << std::endl;
}
