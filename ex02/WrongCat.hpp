#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat& copy);
	~WrongCat();
	WrongCat& operator=(const WrongCat& rhs);

	void makeSound(void) const;
};

#endif
