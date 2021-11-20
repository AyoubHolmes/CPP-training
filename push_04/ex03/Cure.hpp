#ifndef CURE_HPP
#define CURE_HPP
#include"AMateria.hpp"
#include <iostream>
class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &);
		~Cure();
		Cure & operator = (const Cure &);
		Cure(std::string const &);
		virtual AMateria* clone() const;
		virtual void use(ICharacter&);
};

#endif