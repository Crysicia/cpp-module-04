#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define SOURCES_COUNT 4

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(std::string const& name);
	MateriaSource(const MateriaSource& copy);
	~MateriaSource();
	MateriaSource& operator=(const MateriaSource& rhs);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const& type);

private:
	AMateria* m_sources[4];
};

#endif
