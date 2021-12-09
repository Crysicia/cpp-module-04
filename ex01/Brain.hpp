#ifndef BRAIN_HPP
#define BRAIN_HPP

#define IDEAS_COUNT 100

#include <string>
#include <iostream>

class Brain {
public:
	Brain();
	Brain(const Brain& copy);
	~Brain();
	Brain& operator=(const Brain& rhs);

	std::string ideas[IDEAS_COUNT];
};

#endif
