#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal Is Born!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destroyed!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &source) : _type(source._type)
{
	std::cout << "WrongAnimal Copied!" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &source)
{
	if (this != &source)
		_type = source._type;
	std::cout << "WrongAnimal Copy Assinment Called!" << std::endl;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal is making a sound!!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}