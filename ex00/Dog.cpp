#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog Is Born!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destroyed!" << std::endl;
}

Dog::Dog(const Dog &source) : Animal(source)
{
	std::cout << "Dog Copied!" << std::endl;
}

Dog &Dog::operator = (const Dog &source)
{
	if (this != &source)
		Animal::operator=(source);
	std::cout << "Dog Copy Assinment Called!" << std::endl;
	return *this;
}

void Dog::makeSound () const
{
	std::cout << "WOOFF WOOFFFFF!!" << std::endl;
}
