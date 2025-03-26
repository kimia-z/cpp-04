#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(/* args */);
	~Dog();
	Dog(const Dog &source);
	Dog &operator = (const Dog &source);
	void makeSound() override;
};


#endif