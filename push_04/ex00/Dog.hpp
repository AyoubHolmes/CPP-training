#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog:	public	Animal
{
	public:
		Dog();
		Dog(const Dog &);
		virtual ~Dog();
		Dog & operator = (const Dog &);
		std::string const getType()const;
		virtual void  makeSound() const;
};
#endif