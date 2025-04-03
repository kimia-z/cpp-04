#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	/* these should not be allowed(error) */
	/*
	const AAnimal* meta = new AAnimal();
	AAnimal myAnimal;
	*/
	const AAnimal* i = new Dog();
	const AAnimal* j = new Cat();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	
	delete j;
	delete i;

	return 0;
}