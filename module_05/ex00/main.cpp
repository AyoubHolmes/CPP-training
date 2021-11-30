#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int main(){
	try
	{
		Bureaucrat b_cool_boy("name", 140);
		std::cout << b_cool_boy << std::endl;
		b_cool_boy.decrementGrade();
		std::cout << b_cool_boy << " (after increment)" << std::endl;
		b_cool_boy.incrementGrade();
		std::cout << b_cool_boy << " (after decrement)"<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}