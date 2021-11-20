#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include"AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource
{
	private:
		AMateria *source[4];
		int index;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &);
		~MateriaSource();
		MateriaSource & operator = (const MateriaSource &);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const &);
};

#endif