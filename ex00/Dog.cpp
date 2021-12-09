#include "Dog.hpp"

// ---- Default constructors and operators overloading
Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog() {
	std::cout << "Dog default destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) {
	std::cout << "Dog copy operator called" << std::endl;
	if ( this == &rhs ) { return *this; }
	type = rhs.type;
	return *this;
}

// ---- Public methods
void Dog::makeSound(void) const {
	std::cout << "Woof Woof" << std::endl;
}
