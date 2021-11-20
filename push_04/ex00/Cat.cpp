#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructed" << std::endl;

}

Cat::Cat(const Cat &a)
{
	*this = a;
	std::cout<<"Cat { Copy constructor } called"<< std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat class destructed" << std::endl;
}

Cat & Cat::operator = (const Cat &a)
{
	if (this != &a)
		type = a.type;
	// *((Animal*)this) = a;
	return(*this);
}
std::string const Cat::getType()const
{
	return(type);
}

void Cat::makeSound()const
{
	std::cout << "MEWWWWWWWWW...."<< std::endl;
}