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
	this->brain = copy.brain;
}

Cat::~Cat() {
	std::cout << "Cat default destructor called" << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat& rhs) {
	std::cout << "Cat copy operator called" << std::endl;
	type = rhs.type;
	brain = rhs.brain;
	return *this;
}

// ---- Public methods
void Cat::makeSound(void) const {
	std::cout << "Meeeeow" << std::endl;
}
