#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
// #include "Form.hpp"

int main(){
	try
	{
		Bureaucrat b_cool_boy("b_cool_boy", 90);
		Form form("39d l2izdiad", 100, 150);
		std::cout << b_cool_boy << std::endl;
		b_cool_boy.signForm(form);
		form.beSigned(b_cool_boy);	
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}