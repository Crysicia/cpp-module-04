#include "AMateria.hpp"
#include "Cure.hpp"

int main(void) {
	AMateria* cure = new Cure();

	std::cout << cure->getType() << std::endl;

	return 0;
}
