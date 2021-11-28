#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &b)
{
	*this = b;
}

Intern::~Intern()
{}

Intern & Intern::operator = (const Intern &intern)
{
	(void) intern;
	return(*this);
}
Form *func_sh(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form *func_ro(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *func_pr(std::string target)
{
	return new PresidentialPardonForm(target);
}
Form * Intern::makeForm(std::string name, std::string target)
{
	std::string dispatch[3] ={"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};
	Form * (*dispatchFunc[])(std::string) = {func_sh, func_ro, func_pr};
	int i = 0;
	while (i < 3)
	{
		if (name == dispatch[i])
			break ;
		i++;
	}
	if(i == 3)
	{
		std::cout << "No such concrete Form!" << std::endl;
		throw (ErrorException());
		return NULL;
	}
	return (dispatchFunc[i](target));
}
const char *Intern::ErrorException::what() const throw ()
{
	return "Error";
}