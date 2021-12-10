#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria {
public:
	AMateria();
	AMateria(std::string const& type);
	AMateria(const AMateria& copy);
	virtual ~AMateria();
	virtual AMateria& operator=(const AMateria& rhs);

	std::string const& getType(void) const;
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);

protected:
	std::string m_type;
};

#endif
