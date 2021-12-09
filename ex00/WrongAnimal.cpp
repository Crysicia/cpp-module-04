#include "WrongAnimal.hpp"

// ---- Default constructors and operators overloading
WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
	std::cout << "WrongAnimal copy operator called" << std::endl;
	if ( this == &rhs ) { return *this; }
	type = rhs.type;
	return *this;
}

// ---- Public methods
std::string WrongAnimal::getType(void) const {
	return type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "* Loud WrongAnimal sound *" << std::endl;
}
