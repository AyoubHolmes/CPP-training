#ifndef PRESIDENTIALPARDON_HPP
#define PRESIDENTIALPARDON_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string);
    PresidentialPardonForm(const PresidentialPardonForm &);
    PresidentialPardonForm & operator = (const PresidentialPardonForm &);
    virtual void action()const;
    ~PresidentialPardonForm();
};


#endif // !PRESIDENTIALPARDON_HPP