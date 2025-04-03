#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	brain = new Brain();
	std::cout << "Cat Is Born!" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destroyed!" << std::endl;
}

Cat::Cat(const Cat &source) : Animal(source)
{
	brain = new Brain(*source.brain);
	std::cout << "Cat Copied!" << std::endl;
}

Cat &Cat::operator = (const Cat &source)
{
	if (this != &source)
	{
		Animal::operator=(source);
		Brain *newBrain = new Brain(*source.brain);
		delete brain;
		brain = newBrain;
	}
	std::cout << "Cat Copy Assinment Called!" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MEOW MEOWWWW!" << std::endl;
}

std::string Cat::getIdea(int index) const
{
	return this->brain->getIdea(index);
}

void Cat::setIdea(std::string idea, int index)
{
	this->brain->setIdea(idea, index);
}