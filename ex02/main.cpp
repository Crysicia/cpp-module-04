#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	std::cout << "---- Initialize Animals ----" << std::endl;
	// const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl << "---- Initialize WrongAnimals ----" << std::endl;
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << std::endl << "---- Initialize Dogs ----" << std::endl;
	const Dog* doge = new Dog();
	Dog doge_ref;

	std::cout << std::endl << "---- Copy Dog ----" << std::endl;
	const Dog* doge_copy = new Dog(*doge);

	std::cout << std::endl << "---- Assign copy Dog ----" << std::endl;
	Dog doge_ref_assigned;
	doge_ref_assigned = doge_ref;

	std::cout << std::endl << "---- Delete Dog and copies ----" << std::endl;
	delete doge_copy;
	delete doge;

	std::cout << std::endl << "---- Initialize Cats ----" << std::endl;
	const Cat* kat = new Cat();
	Cat kat_ref;

	std::cout << std::endl << "---- Copy Cat ----" << std::endl;
	const Cat* kat_copy = new Cat(*kat);

	std::cout << std::endl << "---- Assign copy Cat ----" << std::endl;
	Cat kat_ref_assigned;
	kat_ref_assigned = kat_ref;

	std::cout << std::endl << "---- Delete Cat and copies ----" << std::endl;
	delete kat_copy;
	delete kat;

	std::cout << std::endl << "---- Call getType() on Animals ----" << std::endl;
	// std::cout << animal->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	std::cout << std::endl << "---- Call getType() on WrongAnimals ----" << std::endl;
	std::cout << wrong_animal->getType() << " " << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;

	std::cout << std::endl << "---- Call makeSound() on Animals ----" << std::endl;
	// animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl << "---- Call makeSound() on WrongAnimals ----" << std::endl;
	wrong_animal->makeSound();
	wrong_cat->makeSound();

	std::cout << std::endl << "---- Delete Animals ----" << std::endl;
	// delete animal;
	delete dog;
	delete cat;

	std::cout << std::endl << "---- Delete WrongAnimals ----" << std::endl;
	delete wrong_animal;
	delete wrong_cat;

	std::cout << std::endl << "---- Delete Animals on the stack ----" << std::endl;
	return 0;
}
