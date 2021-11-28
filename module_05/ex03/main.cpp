#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	try
	{
		Bureaucrat bur2("bur2", 90);
		std::cout << bur2 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}