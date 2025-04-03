#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		std::cout << "\n=====  Array of Animals  =====" << std::endl;
		const Animal* animals[10];
		
		for (int i = 0; i < 10; i++)
		{
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}

		for (int i = 0; i < 10; i++)
		{
			std::cout << animals[i]->getType() << ": ";
			animals[i]->makeSound();
		}

		for (int i = 0; i < 10; i++)
			delete animals[i];
	}
	{
		std::cout << "\n=====  Deep Copy  =====" << std::endl;
		Dog Dog1;
		Dog1.setIdea("I am a Dog", 0);

		Dog copiedDog(Dog1);
		copiedDog.setIdea("I want to play", 0);

		std::cout << "Original Dog's first idea: " << Dog1.getIdea(0) << std::endl;
		std::cout << "Copied Dog's first idea: " << copiedDog.getIdea(0) << std::endl;
	}
	{
		std::cout << "\n=====  Assignment Operator  =====" << std::endl;
		Cat cat1;
		cat1.setIdea("I am hungry!", 1);

		Cat cat2;
		cat2 = cat1;
		cat2.setIdea("I want milk!", 1);

		std::cout << "Cat1's second idea: " << cat1.getIdea(1) << std::endl;
		std::cout << "Cat2's second idea: " << cat2.getIdea(1) << std::endl;
	}

	return 0;
}