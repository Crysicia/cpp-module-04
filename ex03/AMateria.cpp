#include "AMateria.hpp"

AMateria::AMateria() : m_type("Unknown") {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type) : m_type(type) {
	std::cout << "AMateria named constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& rhs) {
	std::cout << "AMateria copy operator called" << std::endl;
	if ( this == &rhs ) { return *this; }
	return *this;
}

std::string const& AMateria::getType(void) const {
	return m_type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}
