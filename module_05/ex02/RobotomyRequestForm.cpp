#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm",72,45)
{
	std::cout << "< **** This is the RobotomyRequestForm's CONSTRUCTOR **** >" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "< **** This is the RobotomyRequestForm's CONSTRUCTOR **** >" << std::endl;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &b):Form(b.getName(), b.getSignGrade(), b.getExecuteGrade())
{
	std::cout << "< **** This is the RobotomyRequestForm's COPY CONSTRUCTOR **** >" << std::endl;
	*this = b;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &form)
{
    if (this != &form)
	    target = form.target;
	return(*this);
}

void RobotomyRequestForm::action()const
{
	std::cout << "Weird Noises!!!!!" << std::endl;
	srand(time(NULL));
	int i = rand() % 2;
	if( i % 2 == 0)
		std::cout<< "< --- " << target << " --- >" << "has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy failled !" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}