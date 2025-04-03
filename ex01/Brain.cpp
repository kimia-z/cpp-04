#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called!" << std::endl;
}

Brain::Brain(const Brain &source)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = source.ideas[i];
	std::cout << "Brain Copied!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}
Brain &Brain::operator = (const Brain &source)
{
	if (this != &source)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = source.ideas[i];
	}
	std::cout << "Brain Copy Assinment Called!" << std::endl;
	return *this;
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index > 99)
	{
		std::cerr << "The index is not correct, index should be between 0-99!" << std::endl;
		return nullptr;
	}
	return this->ideas[index];
}

void Brain::setIdea(std::string idea, int index)
{
	if (index < 0 || index > 99)
	{
		std::cerr << "The index is not correct, index should be between 0-99!" << std::endl;
		return;
	}
	if (idea.empty())
	{
		std::cerr << "Brain needs an idea!" << std::endl;
		return;
	}
	this->ideas[index] = idea;
}