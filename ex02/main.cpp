#include "A_animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	/* these should not be allowed(error) */
	/*
	const A_animal* meta = new A_animal();
	A_animal myAnimal;
	*/
	const A_animal* i = new Dog();
	const A_animal* j = new Cat();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	
	delete j;
	delete i;

	return 0;
}