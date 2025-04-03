#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP
#include <string>
#include <iostream>

class A_animal
{
protected:
	std::string _type;
public:
	A_animal();
	A_animal(const A_animal &source);
	virtual ~A_animal();
	A_animal &operator = (const A_animal &source);
	virtual void makeSound() const = 0;
	std::string getType() const;
};


#endif