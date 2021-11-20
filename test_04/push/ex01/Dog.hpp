#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog: public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &);
		Dog & operator = (const Dog &);
		std::string const getType()const;
		virtual void  makeSound() const;
		Brain *getBrain(void);
		virtual ~Dog();
};
#endif