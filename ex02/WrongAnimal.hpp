#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& copy);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& rhs);

	std::string getType(void) const;
	void makeSound(void) const;
protected:
	std::string type;
};

#endif
