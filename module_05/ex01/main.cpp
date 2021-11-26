#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
// #include "Form.hpp"

int main(){
	try
	{
		// Bureaucrat bur("bur", 150);
		Bureaucrat bur2("bur2", 90);
		Form form("39d l2izdiad", 100, 150);
		// std::cout << bur << std::endl;
		std::cout << bur2 << std::endl;
		// bur.signForm(form);
		bur2.signForm(form);
		// form.beSigned(bur);	
		form.beSigned(bur2);	
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}