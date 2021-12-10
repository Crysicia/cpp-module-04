#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure& copy);
	~Cure();
	Cure& operator=(const Cure& rhs);

	AMateria* clone(void) const;
	void use(ICharacter& target);
};

#endif
