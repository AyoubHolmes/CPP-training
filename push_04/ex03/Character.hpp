#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include"AMateria.hpp"
#include <iostream>

class Character:public ICharacter
{
	private:
		std::string Name;
		AMateria *inventory[4];
		int index;
	public:
		Character();
		Character(const Character &);
		~Character();
		Character & operator = (const Character &);
		virtual std::string const & getName() const;
		virtual void equip(AMateria*);
		virtual void unequip(int);
		virtual void use(int, ICharacter&);

		Character(std::string const & name);
};
#endif