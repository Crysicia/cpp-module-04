#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
public:
	Animal();
	Animal(const Animal& copy);
	virtual ~Animal();
	Animal& operator=(const Animal& rhs);

	std::string getType(void) const;
	virtual void makeSound(void) const = 0;

protected:
	std::string type;
};

#endif
