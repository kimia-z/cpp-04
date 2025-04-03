#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include "AAnimal.hpp"

class Dog : public AAnimal
{
private:
	Brain *brain;
public:
	Dog();
	~Dog();
	Dog(const Dog &source);
	Dog &operator = (const Dog &source);
	void makeSound() const override;
	std::string getIdea(int index) const;
	void setIdea(std::string idea, int index);
};


#endif