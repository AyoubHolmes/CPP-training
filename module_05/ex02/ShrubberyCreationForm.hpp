#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include "Form.hpp"
#include <iostream>

class ShrubberyCreationForm : public Form
{
private:
    const std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string);
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ShrubberyCreationForm & operator = (const ShrubberyCreationForm &);
    virtual void action() const;
    ~ShrubberyCreationForm();
};



#endif