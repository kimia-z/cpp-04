#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Abstract animal")
{
	std::cout << "Abstract animal Is Born!" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Abstract animal Destroyed!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &source) : _type(source._type)
{
	std::cout << "Abstract animal Copied!" << std::endl;
}

AAnimal &AAnimal::operator = (const AAnimal &source)
{
	if (this != &source)
		_type = source._type;
	std::cout << "Abstract animal Copy Assinment Called!" << std::endl;
	return *this;
}

void AAnimal::makeSound() const
{
	std::cout << "Abstract animal is making a sound!!" << std::endl;
}

std::string AAnimal::getType() const
{
	return _type;
}