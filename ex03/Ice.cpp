#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& copy) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& rhs) {
	std::cout << "Ice copy operator called" << std::endl;
	if ( this == &rhs ) { return *this; }
	return *this;
}

AMateria* Ice::clone(void) const {
	AMateria* clone = new Ice();
	return clone;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
