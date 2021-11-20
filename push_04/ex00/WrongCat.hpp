#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"
class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &);
		virtual ~WrongCat();
		WrongCat & operator = (const WrongCat &);
		std::string const getType()const;
		void  makeSound() const;
};
#endif