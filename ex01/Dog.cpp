#include "Dog.hpp"

// ---- Default constructors and operators overloading
Dog::Dog() : brain(NULL) {
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain;
}

Dog::Dog(const Dog& copy) : brain(NULL) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog() {
	std::cout << "Dog default destructor called" << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog& rhs) {
	std::cout << "Dog copy operator called" << std::endl;
	if ( this == &rhs ) { return *this; }
	if (brain) { delete brain; }
	type = rhs.type;
	brain = new Brain(*rhs.brain);
	return *this;
}

// ---- Public methods
void Dog::makeSound(void) const {
	std::cout << "Woof Woof" << std::endl;
}
