#include "Dog.hpp"

// Dog::Dog() : Animal::_type("Dog")
// {
// 	std::cout << "Dog Is Born!" << std::endl;
// }

Dog::~Dog()
{
	std::cout << "Dog Destroyed!" << std::endl;
}

Dog::Dog(const Dog &source)
{
	std::cout << "Dog Copied!" << std::endl;
}

Dog &Dog::operator = (const Dog &source)
{
	std::cout << "Dog Copy Assinment Called!" << std::endl;
}

void Dog::makeSound()
{
	std::cout << "WOOFF WOOFFFFF!!" << std::endl;
}
