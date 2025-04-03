#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include "A_animal.hpp"

class Cat :public A_animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat &source);
	~Cat();
	Cat &operator = (const Cat &source);
	void makeSound() const override;
	std::string getIdea(int index) const;
	void setIdea(std::string idea, int index);
};

#endif