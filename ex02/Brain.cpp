#include "Brain.hpp"

// ---- Default constructors and operators overloading
Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < IDEAS_COUNT; i++) {
		ideas[i] = "* Static noise *";
	}
}

Brain::Brain(const Brain& copy) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain() {
	std::cout << "Brain default destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs) {
	std::cout << "Brain copy operator called" << std::endl;
	for (int i = 0; i < IDEAS_COUNT; i++) {
		ideas[i] = rhs.ideas[i];
	}
	return *this;
}
