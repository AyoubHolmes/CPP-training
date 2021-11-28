#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm",145,137)
{
	std::cout << "< **** This is the ShrubberyCreationForm's CONSTRUCTOR **** >" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm",145,137)
{
    std::cout << "< **** This is the ShrubberyCreationForm's CONSTRUCTOR **** >" << std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &b):Form(b.getName(), b.getSignGrade(), b.getExecuteGrade())
{
	std::cout << "< **** This is the ShrubberyCreationForm's COPY CONSTRUCTOR **** >" << std::endl;
	*this = b;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &form)
{
    if (this != &form)
	    target = form.target;
	return(*this);
}

void ShrubberyCreationForm::action()const
{
	std::string namefile = target + "_shrubbery";
	std::ofstream file;
	file.open(namefile, std::fstream::in | std::fstream::out | std::fstream::trunc);
	file << "               ,@@@@@@@,"  << std::endl;
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o."  << std::endl;
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o"  << std::endl;
	file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"  << std::endl;
	file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"  << std::endl;
	file << "   %&&%/ %&%%&&@@\\ V /@@' 88\\8 /88'"  << std::endl;
	file << "   &%\\  /%&'    |.|        \\ '|8'"  << std::endl;
	file << "       |o|        | |         | |"  << std::endl;
	file << "       |.|        | |         | |"  << std::endl;
	file << "    \\/ .\\////  ,\\_//\\/.  \\//__/ "  << std::endl;
	
	file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}