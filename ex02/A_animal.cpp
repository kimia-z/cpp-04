#include "A_animal.hpp"

A_animal::A_animal() : _type("Abstract animal")
{
	std::cout << "Abstract animal Is Born!" << std::endl;
}

A_animal::~A_animal()
{
	std::cout << "Abstract animal Destroyed!" << std::endl;
}

A_animal::A_animal(const A_animal &source) : _type(source._type)
{
	std::cout << "Abstract animal Copied!" << std::endl;
}

A_animal &A_animal::operator = (const A_animal &source)
{
	if (this != &source)
		_type = source._type;
	std::cout << "Abstract animal Copy Assinment Called!" << std::endl;
	return *this;
}

void A_animal::makeSound() const
{
	std::cout << "Abstract animal is making a sound!!" << std::endl;
}

std::string A_animal::getType() const
{
	return _type;
}