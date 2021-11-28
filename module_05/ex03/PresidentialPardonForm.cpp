#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm",25,5)
{
    std::cout << "< **** This is the PresidentialPardonForm's CONSTRUCTOR **** >" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &bcr):Form(bcr.getName(), bcr.getSignGrade(), bcr.getExecuteGrade())
{
	std::cout << "< **** This is the PresidentialPardonForm's COPY CONSTRUCTOR **** >" << std::endl;
	*this = bcr;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &form)
{
    if (this != &form)
	    target = form.target;
	return(*this);
}

void PresidentialPardonForm::action()const
{
	std::cout << "< --- "<< target << " --- > has been pardoned by Zafod Beeblebrox." <<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}