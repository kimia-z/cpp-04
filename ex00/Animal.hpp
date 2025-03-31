#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(const Animal &source);
	virtual ~Animal();
	Animal &operator = (const Animal &source);
	virtual void makeSound() const;
	std::string getType() const;
};


#endif