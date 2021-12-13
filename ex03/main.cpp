#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main(void) {
	AMateria* tmp;

	std::cout << "---- Initialize MateriaSource ----" << std::endl;
	IMateriaSource* src = new MateriaSource();

	std::cout << std::endl << "---- Initialize Characters ----" << std::endl;
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	std::cout << std::endl << "---- Call learnMaterial() on MateriaSource ----" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl << "---- Call createMateria() on MateriaSource ----" << std::endl;
	tmp = src->createMateria("ice");

	std::cout << std::endl << "---- Call equip() on Character ----" << std::endl;
	me->equip(tmp);

	std::cout << std::endl << "---- Call createMateria() on MateriaSource ----" << std::endl;
	tmp = src->createMateria("cure");

	std::cout << std::endl << "---- Call equip() on Character ----" << std::endl;
	me->equip(tmp);

	std::cout << std::endl << "---- Call use() on Characters ----" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl << "---- Delete Characters ----" << std::endl;
	delete bob;
	delete me;

	std::cout << std::endl << "---- Delete MateriaSource ----" << std::endl;
	delete src;

	return 0;
}
