#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &);
		virtual ~WrongAnimal();
		WrongAnimal & operator = (const WrongAnimal &);
		std::string const getType()const;
		void makeSound()const ;
};
#endif