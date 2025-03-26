#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Is Born!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destroyed!" << std::endl;
}

Animal::Animal(const Animal &source)
{
	std::cout << "Animal Copied!" << std::endl;
}

Animal &Animal::operator = (const Animal &source)
{
	std::cout << "Animal Copy Assinment Called!" << std::endl;
}

void Animal::makeSound()
{
	std::cout << "Animal is making a sound!!" << std::endl;
}