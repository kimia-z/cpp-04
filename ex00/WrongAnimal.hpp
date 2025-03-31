#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &source);
	virtual ~WrongAnimal();
	WrongAnimal &operator = (const WrongAnimal &source);
	void makeSound() const;
	std::string getType() const;
};


#endif