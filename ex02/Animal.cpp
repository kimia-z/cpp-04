#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal Is Born!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destroyed!" << std::endl;
}

Animal::Animal(const Animal &source) : _type(source._type)
{
	std::cout << "Animal Copied!" << std::endl;
}

Animal &Animal::operator = (const Animal &source)
{
	if (this != &source)
		_type = source._type;
	std::cout << "Animal Copy Assinment Called!" << std::endl;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Animal is making a sound!!" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}