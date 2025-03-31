#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* theta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << theta->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	theta->makeSound();
	k->makeSound();
	
	delete j;
	delete i;
	delete meta;
	delete k;
	delete theta;
	return 0;
}