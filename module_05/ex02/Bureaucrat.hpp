#ifndef EX00_HPP
# define EX00_HPP

# include <string>
# include <exception>
# include <iostream>
# include <ostream>
# include "Form.hpp"

class Form;
class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(std::string, int);
    Bureaucrat(const Bureaucrat &);
    Bureaucrat &operator= (const Bureaucrat &);
    
    /* ----------- Getters ------------ */
    
    std::string const & getName() const;
    int getGrade() const;

    /* -------------------------------- */

    /* ------- Member Functions ------- */

    void    incrementGrade();
    void    decrementGrade();
    void    signForm(Form &);

    /* -------------------------------- */

    /* -------- Nested Classes -------- */

    class GradeTooHighException: public std::exception {
        const char* what() const throw();
    };

    class GradeTooLowException: public std::exception {
        const char* what() const throw();
    };

    /* -------------------------------- */
    
    virtual ~Bureaucrat();
};

std::ostream &operator<<(std::ostream&, Bureaucrat const &); 

#endif // !1