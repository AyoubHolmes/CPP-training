#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int main(){
	try
	{
		Bureaucrat bur("name", 150);
		std::cout << bur << std::endl;
		bur.decrementGrade();
		std::cout << bur << " (after increment)" << std::endl;
		bur.incrementGrade();
		std::cout << bur << " (after decrement)"<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}