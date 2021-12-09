#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	std::cout << "---- Initialize Animals ----" << std::endl;
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl << "---- Initialize WrongAnimals ----" << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl << "---- Call getType() on Animals ----" << std::endl;
	std::cout << animal->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	std::cout << std::endl << "---- Call getType() on WrongAnimals ----" << std::endl;
	std::cout << wrong_animal->getType() << " " << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;

	std::cout << std::endl << "---- Call makeSound() on Animals ----" << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl << "---- Call makeSound() on WrongAnimals ----" << std::endl;
	wrong_animal->makeSound();
	wrong_cat->makeSound();


	std::cout << std::endl << "---- Delete Animals ----" << std::endl;
	delete animal;
	delete dog;
	delete cat;

	std::cout << std::endl << "---- Delete WrongAnimals ----" << std::endl;
	delete wrong_animal;
	delete wrong_cat;

	return 0;
}
