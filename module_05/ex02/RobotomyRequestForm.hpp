#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string);
    RobotomyRequestForm(const RobotomyRequestForm &);
    RobotomyRequestForm & operator = (const RobotomyRequestForm &);
    virtual void action()const;
    ~RobotomyRequestForm();
};


#endif