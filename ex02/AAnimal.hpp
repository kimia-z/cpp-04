#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <string>
#include <iostream>

class AAnimal
{
protected:
	std::string _type;
public:
	AAnimal();
	AAnimal(const AAnimal &source);
	virtual ~AAnimal();
	AAnimal &operator = (const AAnimal &source);
	virtual void makeSound() const = 0;
	std::string getType() const;
};


#endif