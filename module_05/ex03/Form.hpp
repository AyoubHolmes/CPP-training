#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
  const std::string name;
  bool is_signed;
  const int grade_sign;
  const int grade_execute;

public:
    Form(/* args */);
    Form(std::string, int, int);
    Form(const Form &);
    Form &operator= (const Form &);

    /* ----------- Getters ------------ */
    
    std::string const & getName() const;
    int const & getSignGrade() const;
    int const & getExecuteGrade() const;
    bool const & isSigned() const;

    /* -------------------------------- */

    void beSigned(Bureaucrat &);

    /* -------- Nested Classes -------- */

    class GradeTooHighException: public std::exception {
        const char* what() const throw();
    };

    class GradeTooLowException: public std::exception {
        const char* what() const throw();
    };

    /* -------------------------------- */
    virtual void action()const = 0;
    void execute(Bureaucrat const & executor);
    ~Form();
};


#endif // !FORM_HPP