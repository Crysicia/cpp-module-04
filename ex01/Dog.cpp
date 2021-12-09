#include "Dog.hpp"

// ---- Default constructors and operators overloading
Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain;
}

Dog::Dog(const Dog& copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
	this->brain = new Brain(*copy.brain);
}

Dog::~Dog() {
	std::cout << "Dog default destructor called" << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog& rhs) {
	std::cout << "Dog copy operator called" << std::endl;
	if ( this == &rhs ) { return *this; }
	type = rhs.type;
	brain = rhs.brain;
	return *this;
}

// ---- Public methods
void Dog::makeSound(void) const {
	std::cout << "Woof Woof" << std::endl;
}
