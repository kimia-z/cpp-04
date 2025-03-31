#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat Is Born!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destroyed!" << std::endl;
}

Cat::Cat(const Cat &source) : Animal(source)
{
	std::cout << "Cat Copied!" << std::endl;
}

Cat &Cat::operator = (const Cat &source)
{
	if (this != &source)
		Animal::operator=(source);
	std::cout << "Cat Copy Assinment Called!" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MEOW MEOWWWW!" << std::endl;
}