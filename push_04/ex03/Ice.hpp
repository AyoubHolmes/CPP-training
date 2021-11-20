#ifndef ICE_HPP
#define ICE_HPP
#include"AMateria.hpp"
#include <iostream>

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &);
		~Ice();
		Ice & operator = (const Ice &);
		Ice(std::string const &);
		virtual AMateria* clone() const;
		virtual void use(ICharacter&);
};

#endif