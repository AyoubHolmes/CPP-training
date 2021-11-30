#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat b("AyoubHolmes", 1);
		Bureaucrat b2("AyoubHolmes", 1);
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Case");
		b.signForm(*rrf);
		b.executeForm(*rrf);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}