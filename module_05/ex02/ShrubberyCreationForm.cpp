#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
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