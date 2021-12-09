#include "WrongCat.hpp"

// ---- Default constructors and operators overloading
WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs) {
	std::cout << "WrongCat copy operator called" << std::endl;
	if ( this == &rhs ) { return *this; }
	type = rhs.type;
	return *this;
}

// ---- Public methods
void WrongCat::makeSound(void) const {
	std::cout << "Wrong Meeeeow" << std::endl;
}
