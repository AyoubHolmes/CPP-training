#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{

	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &);
		Cat & operator = (const Cat &);
		std::string const getType()const;
		virtual void  makeSound() const;
		Brain *getBrain(void);
		virtual ~Cat();
};
#endif