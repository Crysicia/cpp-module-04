#include "Animal.hpp"

// ---- Default constructors and operators overloading
Animal::Animal() : type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal() {
	std::cout << "Animal default destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs) {
	std::cout << "Animal copy operator called" << std::endl;
	type = rhs.type;
	return *this;
}

// ---- Public methods
std::string Animal::getType(void) const {
	return type;
}

void Animal::makeSound(void) const {
	std::cout << "* Loud animal sound *" << std::endl;
}
