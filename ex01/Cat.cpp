#include "Cat.hpp"

// ---- Default constructors and operators overloading
Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat& copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
	this->brain = new Brain(*copy.brain);
}

Cat::~Cat() {
	std::cout << "Cat default destructor called" << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat& rhs) {
	std::cout << "Cat copy operator called" << std::endl;
	if ( this == &rhs ) { return *this; }
	type = rhs.type;
	brain = new Brain(*rhs.brain);
	return *this;
}

// ---- Public methods
void Cat::makeSound(void) const {
	std::cout << "Meeeeow" << std::endl;
}
