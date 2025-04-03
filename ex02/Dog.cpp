#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	brain = new Brain();
	std::cout << "Dog Is Born!" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destroyed!" << std::endl;
}

Dog::Dog(const Dog &source) : A_animal(source)
{
	brain = new Brain(*source.brain);
	std::cout << "Dog Copied!" << std::endl;
}

Dog &Dog::operator = (const Dog &source)
{
	if (this != &source)
	{
		A_animal::operator=(source);
		Brain *newBrain = new Brain(*source.brain);
		delete brain;
		brain = newBrain;
	}
	std::cout << "Dog Copy Assinment Called!" << std::endl;
	return *this;
}

void Dog::makeSound () const
{
	std::cout << "WOOFF WOOFFFFF!!" << std::endl;
}

std::string Dog::getIdea(int index) const
{
	return this->brain->getIdea(index);
}

void Dog::setIdea(std::string idea, int index)
{
	this->brain->setIdea(idea, index);
}
