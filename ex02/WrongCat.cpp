#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat Is Born!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destroyed!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &source) : WrongAnimal(source)
{
	std::cout << "WrongCat Copied!" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &source)
{
	if (this != &source)
		WrongAnimal::operator=(source);
	std::cout << "WrongCat Copy Assinment Called!" << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "MEOW MEOWWWW!" << std::endl;
}