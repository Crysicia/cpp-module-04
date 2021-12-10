#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& copy) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& rhs) {
	std::cout << "Cure copy operator called" << std::endl;
	if ( this == &rhs ) { return *this; }
	return *this;
}

AMateria* Cure::clone(void) const {
	AMateria* clone = new Cure();
	return clone;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
