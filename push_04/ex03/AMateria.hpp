#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(const AMateria &);
		virtual ~AMateria();
		AMateria & operator = (const AMateria &);
		AMateria(std::string const & type);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter&) = 0;
	};

#endif